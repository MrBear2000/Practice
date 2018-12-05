#include<cstdio>
#include<cstring>
bool dp[50100000];
int main()
{

    int t,lemon[105];
    while(scanf("%d",&t)==1)
    {
        int sum=0;
        for(int i=0; i<t; i++)
        {
            scanf("%d",&lemon[i]);
            sum+=lemon[i];
        }
        int h=sum/2,dpsum=0;
        memset(dp,false,sizeof(dp));
        dp[0]=true;
        for(int i=0; i<t; i++)
        {
            for(int j=dpsum; j>=0; j--)
                if(dp[j])dp[j+lemon[i]]=true;
            dpsum+=lemon[i];
        }
        //print(dp,sum);
        int u;
        for(u=h;; u--)if(dp[u])break;
        printf("%d\n",sum-2*u);
    }
    return 0;
}

