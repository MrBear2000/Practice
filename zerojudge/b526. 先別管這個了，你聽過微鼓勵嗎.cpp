#include<cstdio>
#include<set>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int m;
        scanf("%d",&m);
        int l,r;
        set<int>s;
        set<int>::iterator itl,itr;
        int sum=0;
        s.insert(0);
        s.insert(n);
        while(m--)
        {
            scanf("%d%d",&l,&r);
            l--;
            itl=s.lower_bound(l);
            itr=s.lower_bound(r);
            printf("l=%d,r=%d\n",l,r);
            if(itl==s.end())
                s.insert(l);
            else s.erase(itl);
            if(itr==s.end())s.insert(r);
            else s.erase(itr);
            /*for(set<int>::iterator it=s.begin();it!=s.end();it++)
            printf("%d ",*it);puts("");*/
        }
        /*for(set<int>::iterator it=s.begin();it!=s.end();it++)
            printf("%d ",*it);
        puts("");*/
        for(set<int>::iterator it=s.begin(); it!=s.end(); it++)
        {
            sum-=*it-*(++it);
        }
        printf("%d\n",sum);
    }
}
