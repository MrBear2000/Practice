#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,x[1000],cnt,t;
    while(scanf("%d",&n)==1)
    {
        cnt=0;
        for(int i=0;i<n;i++)
            scanf("%d",x+i);
        for(int i=0; i<n; i++)
            for(int j=0; j<n-1; j++)
            {
                if(x[j]>x[j+1])
                {
                    t=x[j];
                    x[j]=x[j+1];
                    x[j+1]=t;
                    cnt++;
                }
            }
        printf("Minimum exchange operations : %d\n",cnt);
    }
}
