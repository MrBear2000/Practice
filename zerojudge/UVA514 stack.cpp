#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int arr[n],x=0;
        while(scanf("%d",&arr[0])&&arr[0])
        {
            for(int i=1; i<n; i++)
            {
                scanf("%d",&arr[i]);
            }
            stack<int> s;
            for(int i=1; i<=n; i++)
            {
                s.push(i);
                while(s.top()==arr[x])
                {
                    printf("%d",s.top());
                    s.pop();
                    x++;
                }
            }
        }
    }
    return 0;
}
