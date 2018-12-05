#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    puts("PERFECTION OUTPUT");
    while(scanf("%d",&n)==1&&n)
    {
        printf("%5d  ",n);
        int sum=1,s=sqrt(n);
        for(int i=2;i<=s;i++)
            if(!(n%i))sum+=i+n/i;
        if(s==sqrt(n)&&!(n%s))sum-=s;
        if(sum==n)puts("PERFECT");
        else if(sum>n)puts("ABUNDANT");
        else puts("DEFICIENT");
    }
    puts("END OF OUTPUT");
}
