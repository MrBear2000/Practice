#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int n,next[210],llen[210],u;
    char ans[210],mes[210];
    while(scanf("%d",&n)==1&&n)
    {
        for(int i=1;i<=n;i++)
            scanf("%d",&next[i]);
        for(int i=1;i<=n;i++)
        {
            llen[i]=1;
            for(int j=next[i];j!=i;j=next[j])
                llen[i]++;
        }
        while(scanf("%d",&u)==1&&u)
        {
            for(int i=0;i<=n;i++)mes[i]=' ';
            for(int i=0;i<=n;i++)
            {
                char c=getchar();
                if(c!='\n')mes[i]=c;
                else break;
            }
            for(int i=1;i<=n;i++)
            {
                int x=u%llen[i];
                int k=i;
                while(x>0){x--;
                    k=next[k];}
                ans[k]=mes[i];
            }
            for(int i=1;i<=n;i++)
                putchar(ans[i]);
            puts("");
        }
        puts("");
    }
}
