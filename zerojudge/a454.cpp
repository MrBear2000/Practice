#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#define maxn 1050
using namespace std;
int n,ind[maxn],dp[maxn],day[maxn],res;bool vis[maxn];
void dfs(int x,vector<int>v[])
{
    vis[x]=true;
    for(int i=0;i<v[x].size();i++)
    {
        int&u=v[x][i];
        ind[u]--;
        dp[u]=max(dp[u],day[u]+dp[x]);
        if(!ind[u])dfs(u,v);
    }
}
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            memset(ind,0,sizeof(ind));
            memset(dp,0,sizeof(dp));
            memset(vis,false,sizeof(vis));
            scanf("%d",&n);
            vector<int>v[n+1];
            for(int i=0;i<=n;i++)
                v[i].clear();
            for(int i=1;i<=n;i++)
            {
                int m,a;
                scanf("%d %d",&day[i],&m);

                for(int j=0;j<m;j++)
                {
                    scanf("%d",&a);
                    v[i].push_back(a);
                    ind[a]++;
                }
            }
            res=0;
            for(int i=1;i<=n;i++)
            {
                if(ind[i]||vis[i])continue;
                dp[i]=day[i];
                dfs(i,v);
            }
            for(int i=1;i<=n;i++)
                res=max(res,dp[i]);
            printf("%d\n",res);
        }
    }
    return 0;
}
