#include<cstdio>
#include<vector>
using namespace std;
vector<int>g[200];
int color[200];
bool dfs(int v,int c)
{
    color[v]=c;
    int s=g[v].size();
    for(int i=0;i<s;i++)
    {
        if(color[g[v][i]]==c)return false;
        if(color[g[v][i]]==0&&!dfs(g[v][i],-c))return false;
    }
    return true;
}
void solve()
{
    if(dfs(0,1))puts("BICOLORABLE.");
    else puts("NOT BICOLORABLE.");
}
int main()
{
    int m,n,a,b;
    while(scanf("%d",&m)==1&&m)
    {
        for(int i=0;i<200;i++)
        {
            g[i].clear();
            color[i]=0;
        }
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&a,&b);
            g[a].push_back(b);
            g[b].push_back(a);
        }
        solve();
    }
}

