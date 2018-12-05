#include<cstdio>
using namespace std;
int main()
{
    int d,dd,m,mm,y,yy,age,n;
    char s[15];
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%s",s);
            s[2]=s[5]=' ';
            sscanf(s,"%d%d%d",&d,&m,&y);
            scanf("%s",s);
            s[2]=s[5]=' ';
            sscanf(s,"%d%d%d",&dd,&mm,&yy);
            age=y-yy-(m<mm||m==mm&&d<dd);
            printf("Case #%d: ",i);
            if(age<0)puts("Invalid birth date");
            else if(age>130)puts("Check birth date");
            else printf("%d\n",age);
        }
    }
}
