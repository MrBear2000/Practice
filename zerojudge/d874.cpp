#include<cstdio>

int main()
{
    int sum=0,ans[200005],k=1,cnt=0;
    for(int i=1;k<=20000;i++)
    {
        sum+=i;
        cnt++;
        while(k<=sum)ans[k++]=cnt;
        sum+=i;
        cnt++;
        while(k<=sum)ans[k++]=cnt;
        //printf("%d\n",i);
    }//puts("o");
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d\n",ans[n]);
    }
    return 0;
}
