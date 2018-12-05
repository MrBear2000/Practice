#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        priority_queue<int,vector<int>,greater<int> >pq;
        int k,a,b,ans=0;
        while(n--)
        {
            scanf("%d",&k);
            pq.push(k);
        }
        while(pq.size()>=2)
        {
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            ans+=a+b;
            pq.push(a+b);
        }
        printf("%d\n",ans);
    }
    return 0;
}
