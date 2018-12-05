#include<cstdio>
using namespace std;
int main()
{
    int n;
    char c[20];
    while(scanf("%s",c)==1)
    {
        if(c[0]=='-')break;
        if(c[0]=='0'&&c[1]=='x')
        {
            sscanf(c+2,"%X",&n);
            printf("%d\n",n);
        }
        else
        {
            sscanf(c,"%d",&n);
        printf("0x%X\n",n);
        }
    }
}
