#include<cstdio>
using namespace std;
int main()
{
    long long a[80]= {1,2,4,7};
    int n;
    for(int i=4; i<80; i++)
        a[i]=a[i-1]+a[i-2]+1;
    while(scanf("%d",&n)==1&&n>=0)
    {
        if(n>0) printf("%lld %lld\n",a[n-1],a[n]);
        else puts("0 1");
    }
}
