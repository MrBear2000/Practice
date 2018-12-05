#include<cstdio>
#include<vector>
#define maxn 1000010
#include<cstring>
using namespace std;
vector<int>v[maxn];
bool vis[maxn];
int n,m,from,to;
bool dfs(int p)
{
    if(p==to)return true;
    int sz=v[p].size();
    for(int i=0;i<sz;i++)
    {
        if(!vis[v[p][i]])
        {
            vis[v[p][i]]=true;
            if(dfs(v[p][i]))return true;
        }
    }
    return false;
}
int main()
{
    while(scanf("%d%d",&n,&m)==2)
    {
        for(int i=0;i<n;i++)
            v[i].clear();
        memset(vis,false,sizeof(vis));
        for(int i=0;i<m;i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
        }
        scanf("%d%d",&from,&to);
        puts(dfs(from)?"Yes!!!":"No!!!");
    }
    return 0;
}
