#include<cstdio>
#include<cmath>
using namespace std;
int prime[500]={2,3,5,7};
bool is_prime(int n)
{
    int sn=sqrt(n);
    for(int i=0;prime[i]<=sn;i++)
        if(!(n%prime[i]))return false;
    return true;
}
void sol(int n)
{
    for(int i=0;prime[i]<=n/2;i++)
        if(is_prime(n-prime[i]))
    {
        printf("%d = %d + %d\n",n,prime[i],n-prime[i]);
        return;
    }
    puts("Goldbach's conjecture is wrong.");
}
int main()
{
    int k=4;
    for(int i=9;i<1000;i+=2)
        if(is_prime(i))prime[k++]=i;
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        sol(n);
    }
}
