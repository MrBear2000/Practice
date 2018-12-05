#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int profit[101],n;
    while(scanf("%d",&n)==1)
    {
        memset(profit,-1,sizeof(profit));
        profit[0]=0;
        int v,p;
        while(n--)
        {
            scanf("%d%d",&v,&p);
            for(int i=100-v;i>=0;i--)
            {
                if(profit[i]!=-1)
                profit[i+v]=max(profit[i+v],profit[i]+p);
            }
        }
        int m=-1;
        for(int i=0;i<101;i++)
            m=max(m,profit[i]);
        printf("%d\n",m);
    }
}
