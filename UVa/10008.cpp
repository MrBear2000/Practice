#include<cstdio>
#include<iostream>
#include<cctype>
#include<cstring>
#include<algorithm>
using namespace std;
struct CNT
{
    char c;
    int cnt;
    CNT() {}
    bool operator<(const CNT a)
    {
        if(cnt==a.cnt)return c<a.c;
        return cnt>a.cnt;
    }
} x[30];
int main()
{
    int n;
    string s;
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<26; i++)
        {
            x[i].c='A'+i;
            x[i].cnt=0;
        }
        getline(cin,s);
        while(n--)
        {
            getline(cin,s);
            for(int i=0; i<s.length(); i++)
                if(isalpha(s[i]))x[toupper(s[i])-'A'].cnt++;
        }
        sort(x,x+26);
        for(int i=0; i<26; i++)
            if(x[i].cnt)
                printf("%c %d\n",x[i].c,x[i].cnt);
            else break;
    }
    return 0;
}
