#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
struct Matrix
{
    long long m[2][2];
    Matrix(){}
    Matrix operator*(const Matrix&rhs)
    {
        Matrix ans;
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
            {
                long long sum=0;
                for(int k=0; k<2; k++)
                    sum+=m[i][k]*rhs.m[k][j];
                ans.m[i][j]=sum;
            }
        return ans;
    }
    Matrix operator%(const int n)
    {
        Matrix ans;
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                ans.m[i][j]=m[i][j]%n;
        return ans;
    }
};
Matrix pow(Matrix x,int p,int mod)
{
    x=x%mod;
    if(p==1)
        return x;
    if(p==0)
    {
        Matrix ans;
        ans.m[0][0]=ans.m[1][1]=1;
        ans.m[1][0]=ans.m[0][1]=0;
        return ans;
    }
    return pow(x*x,p/2,mod)*pow(x,p%2,mod)%mod;
}
int main()
{
    Matrix x;
    x.m[0][0]=x.m[0][1]=x.m[1][0]=1;
    x.m[1][1]=0;
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        m=1<<m;
        printf("%lld\n",pow(x,n,m).m[0][1]);
    }
}
