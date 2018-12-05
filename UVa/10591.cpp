#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int happy(int n)
{
    int sum=0,x;
    do
    {
        x=n%10;
        sum+=x*x;
    }
    while(n/=10);
    return sum;
}
int main()
{
    int n,k;
    vector<int>v;
    while(scanf("%d",&k)==1)
    {
        for(int i=1; i<=k; i++)
        {
            scanf("%d",&n);
            printf("Case #%d: %d is a",i,n);
            v.clear();
            while(n!=1)
            {
                n=happy(n);
                if(find(v.begin(),v.end(),n)==v.end())
                    v.push_back(n);
                else break;
            }
            if(n==1)
                puts(" Happy number.");
            else puts("n Unhappy number.");
        }
    }
}
