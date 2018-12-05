#include<cstdio>
using namespace std;
int main()
{
    int kase=1,pro[13],u;
    while(scanf("%d",pro)==1&&*pro>=0)
    {
        printf("Case %d:\n",kase++);
        for(int i=1;i<=12;i++)
            scanf("%d",pro+i);
        int sum=pro[0];
        for(int i=1;i<=12;i++)
        {

            scanf("%d",&u);
            if(sum>=u)
            {
                puts("No problem! :D");
                sum-=u;
            }
            else puts("No problem. :(");
            sum+=pro[i];
        }
    }
}
