#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char c[1050];
    int cnt,l;
    while(scanf("%s",c)==1)
    {
        l=strlen(c);
        cnt=1;
        for(int i=1; i<l; i++)
        {
            if(c[i]==c[i-1])
                cnt++;
            else
            {
                if(cnt>2)printf("%d",cnt);
                else if(cnt==2)putchar(c[i-2]);
                putchar(c[i-1]);
                cnt=1;
            }
        }
        if(cnt>2)printf("%d",cnt);
        else if(cnt==2)putchar(c[l-2]);
        putchar(c[l-1]);
        puts("");
    }
}
