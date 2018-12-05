#include<cstdio>
#include<cstring>
int main()
{
    const int ans[]={1,3,11,41,153,571,2131,7953,29681,110771,413403,1542841,5757961,21489003,80198051,299303201};
    /*FILE*f=freopen(".txt","w",stdout);int dp[16]={1,3};
    for(int i=2;i<16;i++)
    {
        dp[i]=dp[i-1]*4-dp[i-2];

    }
    for(int i=0;i<16;i++)
        printf("%d,",dp[i]);
    fclose(f);
    return 0;*/
    int n;
    while(scanf("%d",&n)==1&&n!=-1)
    {
        if(n&1)printf("0\n");
        else printf("%d\n",ans[n/2]);
    }
    return 0;
}
