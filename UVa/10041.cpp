#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
    int n,s,d[510];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d",&s);
            for(int i=0;i<s;i++)
                scanf("%d",d+i);
            sort(d,d+s);
            int ans=0,m=d[s/2];
            for(int i=0;i<s;i++)
                ans+=abs(d[i]-m);
            printf("%d\n",ans);
        }
    }
}
