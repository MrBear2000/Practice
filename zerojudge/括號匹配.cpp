#include<cstdio>
using namespace std;
char arr[30];
void yee(int l,int r,int b,int n)
{
    if(l<n)
    {
        arr[b]='(';
        yee(l+1,r,b+1,n);
    }
    if(r<l)
    {
        arr[b]=')';
        yee(l,r+1,b+1,n);
    }
    else if(r==n)
    {
        for(int i=0;i<2*n;i++)
        {
            printf("%c",arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        yee(0,0,0,n);
    }
}
