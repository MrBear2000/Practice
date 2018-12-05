#include<cstdio>
#include<cmath>
#include<iostream>
#include<set>
#include<algorithm>
#include<queue>
#define INF 10000000
using namespace std;
const int p[12]= {2,3,5,7,11,13,17,19,23,29,31,37};
bool is_prime(int n)
{
    int sn=sqrt(n);
    for(int i=0; p[i]<=sn; i++)
        if(!(n%p[i]))
            return false;
    return true;
}
void pfd(int n,set<int>&s)
{
    int sn=sqrt(n);
    for(int i=0; p[i]<=sn; i++)
        if(!(n%p[i]))
        {
            //puts("test");
            s.insert(p[i]);
            int x=n/p[i];
            if(is_prime(x))
                s.insert(x);
            else
                pfd(n/p[i],s);
        }
}
int dp[1001];
int solve(int n,int T)
{
    set<int>s;
    pfd(n,s);
    int m=INF;
    for(set<int>::reverse_iterator it=s.rbegin();it!=s.rend();it++)
    {
        int x=n+*it;
        if(x<=T)
            m=min(m,dp[x]+1);
    }return m;
}
int main()
{
    int S,T;
    int Case=0;
    while(scanf("%d%d",&S,&T)==2&&(S||T))
    {
        printf("Case %d: ",++Case);
        if(S>T||S==1||is_prime(S)&&S!=T)
        {
            puts("-1");
            continue;
        }dp[T]=0;
        for(int i=T-1;i>=S;i--)
            dp[i]=solve(i,T);
            if(dp[S]==INF)
                puts("-1");
            else
        printf("%d\n",dp[S]);
    }
}

