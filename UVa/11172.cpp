#include<cstdio>
int main()
{
    int a,b,t;
    while(scanf("%d",&t)==1)
    {
        for(int i=0;i<t;i++)
        {
        char c;
        scanf("%d%d",&a,&b);
        if(a>b)c='>';
        else if(a==b)c='=';
        else c='<';
        printf("%c\n",c);
        }
    }
    return 0;
}
