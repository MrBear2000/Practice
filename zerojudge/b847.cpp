#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int cnt[26],l,ll;
    while(getline(cin,s))
    {
        ll=0;
        l=s.length();
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<l;i++)
        {
            if(!isalpha(s[i]))ll++;
            else cnt[tolower(s[i])-'a']++;
        }
        for(int i=0;i<25;i++)
            printf("%d ",cnt[i]);
        printf("%d\n",cnt[25]);
        for(int i=0;i<25;i++)
            printf("%.2lf ",(double)cnt[i]/(double)(l-ll)*100.0);
        printf("%.2lf\n",(double)cnt[25]/(double)(l-ll)*100.0);
    }
}
