#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1&&n)
    {
        priority_queue<long long,vector<long long>,greater<long long> >pq;
        long long k,a,b,ans=0;
        while(n--)
        {
            scanf("%lld",&k);
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
        printf("%lld\n",ans);
    }
    return 0;
}
