#include<iostream>
#include<sstream>
#include<set>
#include<cctype>
using namespace std;
int main()
{
    string s;
    stringstream ss;
    set<string>dict;
    while(getline(cin,s))
    {
        int n=s.length();
        for(int i=0; i<n; i++)
            if(isalpha(s[i]))
            s[i]=tolower(s[i]);
        else s[i]=' ';
        ss.clear();
        ss.str(s);
        while(ss>>s)
            dict.insert(s);

    }
    for(set<string>::iterator it=dict.begin(); it!=dict.end(); it++)
    {
        cout<<*it<<endl;
    }
}
