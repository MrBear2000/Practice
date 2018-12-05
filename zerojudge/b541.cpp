#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
string ans[45];
string solve(string s)
{
    int l=s.length(),r=1;
    string res;
    char p=s[0],c[20];
    for(int i=1;i<=l;i++)
    {
        if(s[i]==p)r++;
        else
        {
            sprintf(c,"%d",r);
            for(int i=0;i<strlen(c);i++)
                res.push_back(c[i]);
            res.push_back(p);
            r=1;
            p=s[i];
        }
    }
    return res;
}
int main()
{
    ans[1]="1";
    int n;
    for(int i=2;i<=40;i++)
        ans[i]=solve(ans[i-1]);
    while(scanf("%d",&n)==1)
    {
        cout<<ans[n]<<endl;
    }
    return 0;
}
