#include<cstdio>
using namespace std;
int main()
{
    int n,m,k;
    while(scanf("%d",&k)==1)
    {
        while(k--)
        {
            scanf("%d%d",&n,&m);
            n-=2;
            m-=2;
        printf("%d\n",(n/3+(n%3?1:0))*(m/3+(m%3?1:0)));
        }
    }
}
