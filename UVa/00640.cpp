#include<cstdio>
#include<cstring>
using namespace std;
int num[6];
bool ans[1000001];
void dfs(int x)
{
    if(x==6)
    {
        int u=2*num[0]+11*num[1]+101*num[2]+1001*num[3]+10001*num[4]+100001*num[5];
        if(u<1000001)ans[u]=true;
        return;
    }
    for(int i=0;i<10;i++)
    {
        num[x]=i;
        dfs(x+1);
    }
}
int main()
{
    //freopen(".txt","w",stdout);
    memset(ans,false,sizeof(ans));
    dfs(0);
    for(int i=1;i<1000001;i++)
        if(!ans[i])printf("%d\n",i);
    return 0;
}
