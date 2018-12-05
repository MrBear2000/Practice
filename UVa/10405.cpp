#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dp[1050][1050];
char a[1050],b[1050];
int LCS(int i,int j)
{
    if(i<0||j<0)return 0;
    if(dp[i][j]>=0)return dp[i][j];
    dp[i][j]=a[i]==b[j]?LCS(i-1,j-1)+1:max(LCS(i-1,j),LCS(i,j-1));
    return dp[i][j];
}
int main()
{
    while(scanf("%s",a)==1)
    {
        scanf("%s",b);
        memset(dp,-1,sizeof(dp));
        printf("%d\n",LCS(strlen(a)-1,strlen(b)-1));
    }
}
