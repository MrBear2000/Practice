#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d",&m)==1)
    {
        while(m--)
        {
            scanf("%d",&n);
            if(n==1)
            {
                puts("1");
                continue;
            }
            stack<int>s;
            for(int i=9; i>1; i--)
                while(!(n%i))
                {
                    n/=i;
                    s.push(i);
                }
            if(n!=1)puts("-1");
            else
            {
                while(!s.empty())
                {
                    printf("%d",s.top());
                    s.pop();
                }
                puts("");
            }

        }
    }
}
