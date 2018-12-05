#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,c,sum,M,x,k=1;
    int el[20];
    bool bel[20],ok;
    while(scanf("%d%d%d",&n,&m,&c)==3&&(n||m||c))
    {
        M=sum=0;
        ok=1;
        memset(bel,0,sizeof(bel));
        for(int i=0; i<n; i++)
            scanf("%d",&el[i]);
        for(int i=0; i<m; i++)
        {
            scanf("%d",&x);
            if(bel[x-1])
            {
                sum-=el[x-1];
            }
            else
            {
                sum+=el[x-1];
                M=max(sum,M);
                if(sum>c)
                    ok=0;
            }
            bel[x-1]=!bel[x-1];
        }
        printf("Sequence %d\n",k++);
        if(ok)
        {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n",M);
        }
        else printf("Fuse was blown.\n");
        putchar('\n');
    }

}
