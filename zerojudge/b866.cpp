#include<cstdio>
using namespace std;
void ans(int*L,int*R,int m)
{
    for(int i=0;i<m;i++)
        if(L[i]>R[i])
    {
        puts("No");
        return;
    }
    puts("Yes");
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        int L[m],R[m],l,r;
        for(int i=0;i<m;i++)
            scanf("%d%d",L+i,R+i);
        while(--n)
        {
            for(int i=0;i<m;i++)
            {
                scanf("%d%d",&l,&r);
                if(l>L[i])L[i]=l;
                if(r<R[i])R[i]=r;
            }
        }
        ans(L,R,m);
    }
}
