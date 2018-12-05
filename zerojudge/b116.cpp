#include<cstdio>
#include<cstring>
int main()
{
    bool dp[101000];
    int t,x[105],n;
    while(scanf("%d%d",&t,&n)==2)
    {
        while(t--)
        {
            memset(dp,false,sizeof(dp));
            int sum=0;
            for(int i=0;i<n;i++)
            {
                scanf("%d",x+i);
                sum+=x[i];
            }
            if(sum&1)
            {
                puts("No");
                continue;
            }
            dp[0]=true;
            int dpsum=0;
            for(int i=0;i<n;i++)
            {
                for(int j=dpsum;j>=0;j--)
                    if(dp[j])dp[j+x[i]]=true;
                dpsum+=x[i];
            }
            puts(dp[sum/2]?"Yes":"No");
        }
    }
    return 0;
}

