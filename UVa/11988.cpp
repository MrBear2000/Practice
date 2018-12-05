#include<cstdio>
#include<cstring>
using namespace std;
char c[100010];
int next[100010];
int main()
{
    while(scanf("%s",c+1)!=EOF)
    {
        int l=strlen(c+1);
        int p,last=p=0;
        next[0]=0;
        for(int i=1;i<=l;i++)
        {
            if(c[i]=='[')
                p=0;
            else if(c[i]==']')
                p=last;
            else
            {
                next[i]=next[p];
                next[p]=i;
                if(p==last)last=i;
                p=i;
            }
        }
        for(int i=next[0];i!=0;i=next[i])
            printf("%c",c[i]);
        puts("");
    }
}
