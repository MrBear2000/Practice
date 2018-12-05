#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        map<string,int>m;
        string s;
        int k=1;
        while(n--)
        {
            cin>>s;
            if(!m.count(s))
            {
                m[s]=k;
                printf("New! %d\n",k++);
            }
            else printf("Old! %d\n",m[s]);
        }
    }
    return 0;
}
