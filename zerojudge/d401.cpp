#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int s[1000010],pa[1000010];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a,p,q=p=0;
        while(n--)
        {
            scanf("%d",&a);
            if(a==1)scanf("%d",&s[p++]);
            else scanf("%d",&pa[q++]);
        }
        sort(s,s+p,cmp);
        sort(pa,pa+q,cmp);
        scanf("%d",&a);
        a--;
        printf("%d %d\n",s[a]>=pa[a]?1:2,abs(s[a]-pa[a]));
    }
    return 0;
}
