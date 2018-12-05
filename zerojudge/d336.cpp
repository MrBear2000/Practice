#include<cstdio>
#include<cstring>

int main()
{
    char c[10500];
    int t;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%s",c);
            int l=strlen(c),sum=0;
            for(int i=0;i<l;i++)
                sum+=(c[i]-'0')*(i&1?1:-1);
            puts(sum%3?"No":"Yes");
        }
    }
    return 0;
}
