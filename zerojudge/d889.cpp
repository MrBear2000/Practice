#include<cstdio>
#include<algorithm>

int main()
{
    int n,x[150];
    while(scanf("%d",&n)==1)
    {
        int now=-1;
        for(int i=0;i<n;i++)
            scanf("%d",x+i);
        for(int i=0;i<n&&x[i]<=now+30;i++)
            if(x[i]>now)now=x[i]+4;
            else now+=5;
        printf("%d\n",now+31);
    }
    return 0;
}
