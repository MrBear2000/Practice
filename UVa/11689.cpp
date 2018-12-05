#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d%d%d",&a,&b,&c);
            a=a+b-1;
            printf("%d\n",(a<0?0:a)/(c-1));
        }
    }
}
