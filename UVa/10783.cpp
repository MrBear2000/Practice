#include<cstdio>
using namespace std;
int main()
{
    int n,a,b,kase=1;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d%d",&a,&b);
        if(a==b&&!(a&1)){printf("Case %d: 0\n",kase++);continue;}
        if(!(a&1))a++;
        if(!(b&1))b--;
        printf("Case %d: %d\n",kase++,(a+b)/2*((b-a)/2+1));

        }
    }
}
