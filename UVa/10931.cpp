#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,t;
    stack<int>s;
    while(scanf("%d",&n)==1&&n)
    {
        t=0;
        while(n)
        {
            t+=n%2;
            s.push(n%2);
            n/=2;
        }
        printf("The parity of ");
        while(!s.empty())
        {
            printf("%d",s.top());
            s.pop();
        }
        printf(" is %d (mod 2).\n",t);
    }
}
