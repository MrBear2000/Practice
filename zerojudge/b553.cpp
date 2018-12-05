#include<cstdio>
int collatz(int n)
{
    if(n&1)return 3*n+1;
    return n/2;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int cnt=0;
        while(n!=1)
        {
            n=collatz(n);
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
