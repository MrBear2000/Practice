#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int maxsum(int *A,int x,int y)
{
    if(y-x==1)return A[x];
    int m=x+(y-x)/2;
    int maxs=max(maxsum(A,x,m),maxsum(A,m,y));
    int v=0,L=A[m-1],R=A[m];
    for(int i=m-1;i>=x;i--)
        L=max(L,v+=A[i]);
    v=0;
    for(int i=m;i<y;i++)
        R=max(R,v+=A[i]);
    return max(maxs,L+R);
}
int main()
{
    int n,m[10010],x;
    while(scanf("%d",&n)==1&&n)
    {
        for(int i=0;i<n;i++)
            scanf("%d",m+i);
        x=maxsum(m,0,n);
        if(x>0)
            printf("The maximum winning streak is %d.\n",x);
        else
            printf("Losing streak.\n");
    }
}
