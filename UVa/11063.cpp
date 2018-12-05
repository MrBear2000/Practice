#include<cstdio>
#include<algorithm>
using namespace std;
bool solve(int *A,int n)
{
    int k=0,arr[10100],x;
    if(A[0]<1)return false;
    for(int i=0; i<n-1; i++)
    {
        if(A[i]>=A[i+1])return false;
        for(int j=i; j<n; j++)
        {
            x=A[i]+A[j];
            //printf("%d\n",x);   //test
            if(find(arr,arr+k,x)==arr+k)
                arr[k++]=x;
            else return false;
        }

    }return true;
}
int main()
{
    int num[105],n,kase=1;
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++)
            scanf("%d",num+i);
        printf("Case #%d: %s\n\n",kase++,solve(num,n)?"It is a B2-Sequence.":"It is not a B2-Sequence.");
    }
}
