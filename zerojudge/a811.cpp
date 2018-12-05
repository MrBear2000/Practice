#include<cstdio>
#include<algorithm>
typedef long long ll;
ll abs2(ll a)
{
    return a>=0?a:-a;
}
ll gcd(ll a,ll b)
{
    while(a)
    {
        b%=a;
        std::swap(a,b);
    }
    return b;
}
int main()
{
    ll a,b,c,t,n;
    while(scanf("%lld",&t)==1)
    {
        while(t--)
        {
            scanf("%lld",&n);
            scanf("%lld%lld",&a,&b);
            b=abs2(a-b);
            n--;
            while(--n)
            {
                scanf("%lld",&c);
                b=gcd(b,abs2(c-a));
            }
            printf("%lld\n",b);
        }
    }
    return 0;
}
