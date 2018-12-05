#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
char a[150],b[150];
int dp[150][150];
int lcs(int i,int j)
{
    if(i<0||j<0)return 0;
    if(dp[i][j]>=0)return dp[i][j];
    dp[i][j]=a[i]==b[j]?lcs(i-1,j-1)+1:max(lcs(i-1,j),lcs(i,j-1));
    return dp[i][j];
}
int main()
{
    int kase=1;
    //freopen(".txt","w",stdout);
    while(gets(a)&&strcmp(a,"#"))
    {
        gets(b);
        memset(dp,-1,sizeof(dp));
        printf("Case #%d: you can visit at most %d cities.\n",kase++,lcs(strlen(a)-1,strlen(b)-1));
    }
}
