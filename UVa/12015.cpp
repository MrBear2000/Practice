#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    string s;
    int x;
    while(scanf("%d",&n)==1)
    {
        for(int kase=1;kase<=n;kase++)
        {
        printf("Case #%d:\n",kase);
        vector<string>v;
        int m=-1;
        for(int i=0; i<10; i++)
        {
            cin>>s>>x;
            if(x>m)
            {
                m=x;
                v.clear();
                v.push_back(s);
            }
            else if(x==m)
                v.push_back(s);
        }
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;


        }
    }
}
