#include<cstdio>
#include<cstring>
int main()
{
    long long dp[1000],ans[40],sum=0;
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<40;i++)
    {
        for(int j=sum;j>=0;j--)
            if(dp[j]>=0)dp[j+i]+=dp[j];
        sum+=i;
        ans[i]=sum&1?0:dp[sum/2]/2;
    }
    int n;
    while(scanf("%d",&n)==1)
        printf("%d\n",ans[n]);
    return 0;
}
