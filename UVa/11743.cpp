#include<cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
        int sum=0;
        char x[5];
        for(int i=0;i<4;i++)
        {
            scanf("%s",x);
            x[0]=(x[0]-'0')*2;
            x[2]=(x[2]-'0')*2;
            x[1]=x[1]-'0';
            x[3]=x[3]-'0';
            sum+=x[0]/10+x[0]%10+x[2]/10+x[2]%10+x[3]+x[1];
        }
        if(sum%10)
            puts("Invalid");
        else puts("Valid");

        }
    }
}
