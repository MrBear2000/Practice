#include<cstdio>
using namespace std;
int main()
{
    int n;
    char c[100];
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            int t,cnt=0;
            scanf("%d",&t);
            scanf("%s",c);
            for(int j=0;j<t;j++)
            {
                if(c[j]=='.')//......
                {
                    cnt++;
                    j+=2;
                }
            }
            printf("Case %d: %d\n",i,cnt);
        }
    }
}
