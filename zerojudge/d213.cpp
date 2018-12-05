#include<cstdio>
using namespace std;
typedef unsigned long long LL;
LL pow(LL n,LL p)
{
    if(p==1)return n;
    if(p==0)return 1;
    return pow(n*n,p/2)*pow(n,p%2);
}
void solve(LL n)
{
    if(n<10)
    {
        printf("%llu\n",(pow(2,n+2))-2);
        return;
    }else
    {
        printf("%llu\n",pow(2,n+2)-pow(2,n-8));
        return;
    }

}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        solve(n);
    }
}
