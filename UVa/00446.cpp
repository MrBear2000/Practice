
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
void bi(int n)
{
    stack<int>s;
    for(int i=0;i<13;i++)
    {
        s.push(n%2);
        n/=2;
    }
    while(!s.empty())
    {
        printf("%d",s.top());
        s.pop();
    }
}
int main()
{
    int a,b,n,sol;
    char c;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
        scanf("%X %c %X",&a,&c,&b);
            bi(a);
            printf(" %c ",c);
            bi(b);
            if(c=='+')
                sol=a+b;
            else if(c=='-')
                sol=a-b;
            printf(" = %d\n",sol);
        }
    }
}
