#include<cstdio>
#include<cstring>
#define maxn 1000050
int next[maxn];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        memset(next,0,sizeof(next));
        for(int i=1;i<n;i++)
            next[i]=i+1;
        int k;
        while(m--)
        {
            scanf("%d",&k);
            if(next[k])
            {
                int u=next[k];
                printf("%d\n",u);
                next[k]=next[u];
                next[u]=0;
            }
            else puts("0u0 ...... ?");
        }
    }
    return 0;
}
