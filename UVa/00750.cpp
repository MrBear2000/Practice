#include<cstdio>
int ans[8];
int kase;
void solve(int n,int r,int c)
{
    if(n==8)
    {
        printf("%2d      ",++kase);
        for(int i=0;i<7;i++)
            printf("%d ",ans[i]+1);
        printf("%d\n",ans[7]+1);
        return;
    }
    if(n==r){ans[n]=c;
    solve(n+1,r,c);
    return;
    }
    for(int i=0;i<8;i++)//i:column
        if(!(i==c||i-c==n-r||i-c==r-n))
        {
            bool ok=1;
            for(int j=0;j<n;j++)
                if(i==ans[j]||i==ans[j]-j+n||i==ans[j]-n+j)
                {
                    ok=0;
                    break;
                }
            if(ok)
            {
                ans[n]=i;
                solve(n+1,r,c);
            }
        }
}
using namespace std;
int main()
{
    //freopen(".txt","w",stdout);
    int r,c,n;
    scanf("%d",&n);
    bool isfirst=0;
    while(n--)
    {
        kase=0;
        if(isfirst)puts("");
        isfirst=1;
        puts("SOLN       COLUMN");
        puts(" #      1 2 3 4 5 6 7 8\n");
        scanf("%d%d",&c,&r);
        solve(0,r-1,c-1);
    }
}
