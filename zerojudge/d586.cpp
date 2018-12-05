#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    const char* a="uzrmatifxopnhwvbslekycqjgd";
    const char* b="mjqhofawcpnsexdkvgtzblryui";
    int n,m,i,sum,x;
    char c[3];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            sum=0;
            scanf("%d",&m);
            while(m--)
            {
                scanf("%s",c);
                if(isalpha(c[0]))
                {
                    for(i=0;a[i]!=c[0];i++);
                    sum+=i+1;
                }
                else
                {
                    sscanf(c,"%d",&x);
                    printf("%c",b[x-1]);
                }
            }
            if(sum)printf("%d",sum);
            puts("");
        }
    }
}
