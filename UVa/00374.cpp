#include<cstdio>
using namespace std;
int B,P,M;
int pow(int x,int p)
{
    x%=M;
    if(p==1)return x;
    if(p==0)return 1;
    return pow(x*x,p/2)*(p&1?x:1)%M;
}
int main()
{
    while(scanf("%d%d%d",&B,&P,&M)==3)
    {
        printf("%d\n",pow(B,P));
    }
}
