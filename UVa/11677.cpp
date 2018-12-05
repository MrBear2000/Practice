#include<cstdio>
int main()
{
    int a,b,c,d;
    while(scanf("%d%d%d%d",&a,&b,&c,&d)==4&&(a||b||c||d))
    {
        printf("%d\n",(((c-a)*60+d-b)+1440)%1440);
    }
    return 0;
}
