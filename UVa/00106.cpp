#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int gcd(int a,int b)
{
    while(a)
    {
        b%=a;
        swap(a,b);
    }
    return b;
}
int main()
{
    int N;
    while(scanf("%d",&N)==1)
    {
        bool x[N+1];
        int cnt=0;
        memset(x,false,sizeof(x));
        for(int i=2; i*i<=N; i++)
            for(int j=1; j<i&&j*j+i*i<=N; j++)
            {
                if((i&1)!=(j&1)&&gcd(i,j)==1)cnt++;
                int a=i*i-j*j,b=2*i*j,c=i*i+j*j;
                for(int k=1; k*c<=N; k++)
                    x[a*k]=x[b*k]=x[c*k]=true;
            }
        printf("%d ",cnt);
        cnt=0;
        for(int i=1; i<=N; i++)
            if(!x[i])cnt++;
        printf("%d\n",cnt);
    }
}
