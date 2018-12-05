#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int num[10],n,x;
    bool ok;
    while(scanf("%d",&n)==1&&n)
    {
        ok=0;
        for(num[5]=0;num[5]*n<10;num[5]++)
        {
            for(num[6]=0;num[6]<10&&(num[5]*10+num[6])*n<100;num[6]++)
                for(num[7]=0;num[7]<10;num[7]++)
                for(num[8]=0;num[8]<10;num[8]++)
                for(num[9]=0;num[9]<10;num[9]++)
            {
                x=(num[5]*10000+num[6]*1000+num[7]*100+num[8]*10+num[9])*n;
                if(x>99999)break;
                num[0]=x/10000;
                num[1]=x/1000%10;
                num[2]=x/100%10;
                num[3]=x/10%10;
                num[4]=x%10;
                for(int i=0;i<9;i++)
                    for(int j=i+1;j<10;j++)
                {
                    if(num[i]==num[j])
                        goto yee;
                }
                    ok=1;
                    for(int i=0;i<5;i++)
                        printf("%d",num[i]);
                    printf(" / ");
                    for(int i=5;i<10;i++)
                        printf("%d",num[i]);
                    printf(" = %d\n",n);
                    yee:;
            }
        }
        if(!ok)
            printf("There are no solutions for %d.\n",n);
        putchar('\n');
    }
}
