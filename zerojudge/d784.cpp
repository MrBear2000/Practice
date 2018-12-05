#include<cstdio>
#include<algorithm>
using namespace std;
int maxsum(int l,int r,int*A)
{
    if(r-l==1)return A[l];
    int m=l+(r-l)/2,maxs=max(maxsum(l,m,A),maxsum(m,r,A));
    int v=0,L=A[m-1];
    for(int i=m-1;i>=l;i--)
        L=max(L,v+=A[i]);
    v=0;
    int R=A[m];
    for(int i=m;i<r;i++)
        R=max(R,v+=A[i]);
    return max(maxs,L+R);
}
int main()
{
    int t,x[110],n;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            for(int i=0;i<n;i++)
                scanf("%d",x+i);
            printf("%d\n",maxsum(0,n,x));
        }
    }
}
