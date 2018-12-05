#include<cstdio>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        n=(n+1)/2;
        printf("%lld\n",(2*n*n-3)*3);
    }
}
