#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
int prime[300]= {2,3,5};
bool is_prime(int n)
{
    int sn=sqrt(n);
    for(int i=0; prime[i]<=sn; i++)
        if(!(n%prime[i]))return false;
    return true;
}
int solve(int n)
{
    int cnt=0;
    for(int i=0;!is_prime(n);i++)
    {
        if(!(n%prime[i]))
        {
            cnt++;
            while(!(n%prime[i]))
                n/=prime[i];
        }
    }
    if(n!=1)cnt++;
    return cnt;
}
int main()
{
    int n=3;
    for(int i=7; i<1010; i+=2)
        if(is_prime(i))prime[n++]=i;
    while(scanf("%d",&n)==1&&n)
    {
        printf("%d : %d\n",n,solve(n));

    }
}
