#include<cstdio>
using namespace std;
int main()
{
    int n,I,D;
    while(scanf("%d",&n)==1&&n>0)
    {
        while(n--)
        {
            scanf("%d%d",&D,&I);
            int k=1;
            for(int i=0;i<D-1;i++)
                if(I&1)
            {
                k*=2;
                I=(I+1)/2;
            }else
            {
                k=k*2+1;
                I/=2;
            }
            printf("%d\n",k);
        }
    }
}
