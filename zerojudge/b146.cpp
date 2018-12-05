#include<cstdio>
int main()
{
    int a,b,m,ans;
    while(scanf("%d%d",&a,&b)==2)
    {
        m=a+b-8;
        ans=1;
        for(int i=2;i<=7;i++)
        {
            scanf("%d%d",&a,&b);
            int x=a+b-8;
            if(x>m)
            {
                ans=i;
                m=x;
            }
        }
        printf("%d\n",m>0?ans:0);
    }
    return 0;
}
