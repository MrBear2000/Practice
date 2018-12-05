#include<cstdio>
#include<algorithm>
using namespace std;
int bs(int*A,const int v,int r)
{
    int m,l=0;
    while(l<r)
    {
        m=l+(r-l)/2;
        if(A[m]<=v)l=m+1;
        else r=m;
    }
    return l;
}
int main()
{
    int n,k,q,p,num[500050];
    while(scanf("%d%d",&n,&q)==2)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&num[i]);
        sort(num,num+n);

        while(q--)
        {
            scanf("%d",&p);
            puts(bs(num,p,n)&1?"1":"0");
        }

    }
    return 0;
}
