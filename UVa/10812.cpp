#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int s,d,n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d%d",&s,&d);
            if(s<d||(s+d)&1)
                puts("impossible");
            else printf("%d %d\n",(s+d)/2,(s-d)/2);
        }
    }
}
