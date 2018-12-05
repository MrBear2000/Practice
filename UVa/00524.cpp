#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
int prime[]={2,3,5,7,9,11,13};
bool is_prime(int n)
{
    int sn=sqrt(n);
    for(int i=0;prime[i]<=sn;i++)
        if(!(n%prime[i]))return false;
    return true;
}
int ans[20]={1};
bool used[20];
void dfs(int x,int M)
{
    if(x==M)
    {
        if(!is_prime(1+ans[M-1]))return;
        for(int i=0;i<M-1;i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[M-1]);
        return;
    }
    for(int i=2;i<=M;i++)
    {
        if(!used[i]&&is_prime(i+ans[x-1]))
        {
            ans[x]=i;
            used[i]=true;
            dfs(x+1,M);
            used[i]=false;
        }
    }

}
int main()
{
    //freopen("abc.txt","w",stdout);
    int n,kase=1;
    bool f=0;
    while(scanf("%d",&n)==1)
    {
        if(f)puts("");
        f=1;
        memset(used,false,sizeof(used));
        used[1]=true;
        printf("Case %d:\n",kase++);
        dfs(1,n);
    }
}
