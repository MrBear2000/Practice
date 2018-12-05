#include<cstdio>
#include<stack>
#include<cmath>
using namespace std;
typedef long long LL;
const LL MOD=100000007;
void solve(LL n)
{
    bool ok=1;
    LL sn=sqrt(n+0.5);
    for(LL i=1;i<=sn;i++)
    {
        if(n%i)continue;
        LL j=n/i-6*i;
        if(j%7||j<=0)continue;
        LL r=(j/7) % MOD;
        LL ans = (2 * r * r) % MOD;
        printf("Possible Missing Soldiers = %lld\n", ans);
        ok=0;
    }
    if(ok)puts("No Solution Possible");
    puts("");
}

int main()
{
    LL n;
    while(scanf("%lld",&n)==1&&n)
    {
        solve(n);
    }
}
