#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        map<string,int>s;
        string str;
        getline(cin,str);
        getline(cin,str);
        int cnt;
        while(n--)
        {
            s.clear();
            cnt=0;
            while(getline(cin,str)&&str!="")
            {
                if(s.lower_bound(str)!=s.end())
                    s[str]++;
                else s.insert(pair<string,int>(str,1));
                cnt++;
            }
            for(map<string,int>::iterator it=s.begin();it!=s.end();it++)
            {
                cout<<it->first;
                printf(" %.4f\n",100*(float)it->second/(float)cnt);
            }
            puts("");
        }
    }
}
