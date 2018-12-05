#include<cstdio>
int pow(int n,int p)
{
    if(p==0)return 1;
    if(p==1)return n;
    return pow(n*n,p/2)*(p&1?n:1);
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)==2&&(a||b))
    {
        printf("%d\n",pow(a,b));
    }
    int cnt=0;
    while(scanf("%d%d",&a,&b)==2)
        cnt++;
    printf("All Over. Exceeded 65536 lines!\n",cnt);
    return 0;
}
