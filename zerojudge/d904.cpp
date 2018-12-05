#include<cstdio>
#include<cstring>
#include<algorithm>
int main()
{
    int n,dp[10500],dist;
    while(scanf("%d%d",&dist,&n)==2)
    {
        int x;
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        while(n--)
        {
            scanf("%d",&x);
            for(int i=0;i<=dist;i++)
                if(dp[i]>=0)dp[i+x]=dp[i+x]<0?dp[i]+1:std::min(dp[i]+1,dp[i+x]);
        }
        printf("%d\n",dp[dist]);
    }
    return 0;
}
