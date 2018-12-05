#include<cstdio>
#include<algorithm>
using namespace std;
int x[10005],n,m;
bool cmp(int a,int b)
{
    int c=a%m,d=b%m;
    if(c==d)
    {
        if(a&1&&b&1)
            return a>b;
        if(a&1||b&1)
            return a&1;
        return a<b;
    }
    return c<d;
}
int main()
{
    while(scanf("%d%d",&n,&m)==2)
    {
        printf("%d %d\n",n,m);
        if(n||m)
        {
            for(int i=0;i<n;i++)
                scanf("%d",x+i);
            sort(x,x+n,cmp);
            for(int i=0;i<n;i++)
                printf("%d\n",x[i]);
        }
        else break;
    }
}
