#include<cstdio>
#include<iostream>
using namespace std;
bool is_vowel(char c)
{
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return 1;
    default:
        return 0;
    }
}
int main()
{
    string s;
    int s_,cnt,x;
    bool ok;
    while(getline(cin,s))
    {
        if(s=="e/o/i")
            break;
        s_=s.length();
        ok=1;
        cnt=0;
        x=1;
        for(int i=0; i<s_&&ok; i++)
        {
            if(is_vowel(s[i]))
            {
                cnt++;
                while(is_vowel(s[i]))
                    i++;
            }
            if(s[i]=='/')
            {
                if((x&1?5:7)!=cnt)
                {
                    ok=0;
                    printf("%d\n",x);
                }
                cnt=0;
                x++;
            }
        }
        if(5!=cnt&&ok)
        {
            ok=0;
            printf("%d\n",x);
        }
        if(ok)
            puts("Y");
    }
}
