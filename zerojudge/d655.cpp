#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,u,cnt;
    const int x[]= {1,3,5,7,10,11,50};
    int dp[100];
    for(int i=0; i<100; i++)dp[i]=10000;
    dp[0]=0;
    for(int i=0; i<7; i++)dp[x[i]]=1;
    for(int i=1; i<100; i++)
        for(int j=0; j<7; j++)
        {
            int p=i+x[j];
            if(p<100)
                dp[p]=min(dp[p],dp[i]+1);
            else break;
        }
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d",&u);
            cnt=u/1000+dp[(u/10)%100];
            u%=10;
            cnt+=u/5+u%5;
            printf("%d\n",cnt);
        }
    }
}
