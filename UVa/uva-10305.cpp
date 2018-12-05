#include<cstdio>
#include<vector>
#include<cstring>
#define maxn 200
using namespace std;

vector<int>e[maxn],ans;
bool vis[maxn];

void dfs(int n)
{
    if(vis[n])return;
    vis[n]=true;
    int s=e[n].size();

    for(int i=0;i<s;i++)
    {
        dfs(e[n][i]);
    }
    ans.push_back(n);

}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2&&(n||m))
    {
        int a,b;

        //initialize
        for(int i=0;i<maxn;i++)
        {
            e[i].clear();
        }
        ans.clear();
        memset(vis,false,sizeof(vis));

        //input
        while(m--)
        {
            scanf("%d%d",&a,&b);
            e[a].push_back(b);
        }


        for(int i=1;i<=n;i++)
        {
            dfs(i);
        }
        for(int i=ans.size()-1;i>=0;i--)
            printf("%d%c",ans[i],i==0?'\n':' ');
    }
    return 0;
}
