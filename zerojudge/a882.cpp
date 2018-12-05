#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char c[5050];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%s",c);
            int l=strlen(c),cnt=0;
            for(int i=0;i<l;i++)
                if(c[i]=='X')cnt+=2;
                else if(c[i]=='H')cnt++;
            printf("%d\n",cnt);
        }
    }
}
