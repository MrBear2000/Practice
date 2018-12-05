#include<cstdio>
using namespace std;
int num[15],ans[6];
void dfs(int n,int i,int Max)
{
    if(i>Max)return;
    if(n==6)
    {
        for(int i=0;i<5;i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[5]);
        return;
    }
    ans[n]=num[i];
    dfs(n+1,i+1,Max);
    dfs(n,i+1,Max);
}
int main()
{
    //freopen("y.txt","w",stdout);
    int N;
    bool ok=0;
    while(scanf("%d",&N)==1&&N)
    {
        if(ok)puts("");
        ok=1;
        for(int i=0;i<N;i++)
            scanf("%d",num+i);
        dfs(0,0,N);
    }
}
