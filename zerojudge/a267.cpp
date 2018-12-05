#include<cstdio>
using namespace std;
int main()
{
    int n,cnt;
    while(scanf("%d",&n)==1&&n>=0)
    {
        cnt=0;
        n=n*5+5;
        do cnt++; while(n=n*4/5);
        printf("%d\n",cnt);
    }
}
