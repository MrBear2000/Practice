#include<cstdio>
#include<algorithm>

int main()
{
    int x,e[110],t,n;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                scanf("%d",&x);
                e[i]=x*x;
            }
            int cnt=0;
            std::sort(e,e+n);
            for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
            {
                if(std::binary_search(e+j+1,e+n,e[i]+e[j]))cnt+=std::upper_bound(e+j+1,e+n,e[i]+e[j])-std::lower_bound(e+j+1,e+n,e[i]+e[j]);
            }
            printf("%d\n",cnt);
        }
    }
    return 0;
}
