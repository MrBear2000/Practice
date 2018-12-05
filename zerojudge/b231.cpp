#include<cstdio>
#include<algorithm>
using namespace std;

struct Book
{
    int a,b;
    Book(){}
    bool operator<(const Book x)
    {
        if(a!=x.a)return a>x.a;
        return b>x.b;
    }
};
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        Book u[n];
        int sum=0,res=0;
        for(int i=0;i<n;i++)
            scanf("%d%d",&u[i].b,&u[i].a);
        sort(u,u+n);
        for(int i=0;i<n;i++)
        {
            sum+=u[i].b;
            res=max(res,sum+u[i].a);
        }
        printf("%d\n",res);

    }
    return 0;
}
