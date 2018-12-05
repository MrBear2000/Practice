#include<iostream>
#include<set>
#include<string>
#include<sstream>
#include<cctype>
#include<cstdio>
using namespace std;
int main()
{
    //freopen(".txt","w",stdout);
    string s,ans;
    stringstream ss;
    set<string>dict;
    while(getline(cin,s))
    {
        ans+=s;
        int n=ans.length();
        if(ans[n-1]=='-')
        {
            ans.resize(n-1);
            continue;
        }
        for(int i=0;i<n;i++)
        {
            char&x=ans[i];
            if(isalpha(x)||x=='-')
                x=tolower(x);
            else x=' ';
        }
        ss.clear();
        ss.str(ans);
        ans.clear();
        while(ss>>s)
            dict.insert(s);
    }
    for(set<string>::iterator it=dict.begin();it!=dict.end();it++)
    {
        cout<<*it<<endl;
    }
}
