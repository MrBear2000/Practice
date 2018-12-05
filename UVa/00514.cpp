#include<cstdio>
#include<stack>
using namespace std;
void solve(int *A,int n)
{
    stack<int>s;
    int now=0,i=0;
    while(now<n)
    {
        s.push(++now);
        while(!s.empty()&&s.top()==A[i])
        {
            i++;
            s.pop();
        }
    }
    if(s.empty())
        puts("Yes");
    else
        puts("No");
}
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        int car[n];
        while(scanf("%d",car)&&car[0])
        {
            for(int i=1;i<n;i++)
                scanf("%d",&car[i]);
                solve(car,n);
        }
    }
    return 0;
}
