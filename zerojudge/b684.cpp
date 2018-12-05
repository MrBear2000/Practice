#include<cstdio>
int x[1000050];
int main()
{
    int n,k;
    while(scanf("%d",&n)==1)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&k);
            x[k]=i;
        }
        bool f=true;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(x[i]<x[i+1]!=f)
            {
                f=!f;
                cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
