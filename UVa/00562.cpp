#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;
bool dp[50050];
int main()
{
    int x,sum,t,n;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            memset(dp,false,sizeof(dp));
            dp[0]=true;
            sum=0;
            while(n--)
            {
                scanf("%d",&x);
                for(int i=sum;i>=0;i--)
                if(dp[i])dp[i+x]=true;
                    sum+=x;
            }
            int half=sum/2,u;
            for(u=0;;u++)
                if(dp[half+u])
                {
                    u+=half;
                    break;
                }
                else if(dp[half-u])
                {
                    u=half-u;
                    break;
                }
            printf("%d\n",abs(sum-2*u));
        }
    }
}
