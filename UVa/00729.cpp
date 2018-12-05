#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,h;
    char s[20];
    bool o=false;
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            if(o)puts("");
            o=true;
            scanf("%d%d",&n,&h);
            for(int i=0;i<n-h;i++)s[i]='0';
            for(int i=n-h;i<n;i++)s[i]='1';
            s[n]='\0';
            do puts(s);while(next_permutation(s,s+n));
        }
    }
    return 0;
}
