#include<cstdio>
#include<algorithm>
using namespace std;
typedef long long LL;
LL re(LL n)
{
    LL ans=0;
    while(n)
    {
        ans=ans*10+n%10;
        n/=10;
    }
    return ans;
}
int main()
{
    int n,t,x;
    LL l;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            t=0;
            scanf("%lld",&l);
            l+=re(l);
            while(1)
            {
                t++;
                x=re(l);
                if(x==l)
                    break;
                l+=x;
            }
            printf("%d %d\n",t,l);
        }
    }
}

