#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
using namespace std;
int yee(char c)
{
    if(c>='A'&&c<='Z')
        return c-64;
    else if(c>='a'&&c<='z')
        return c-96;
    else if(c==' ')
        return 0;
    else
        return -1;
}
int main()
{
    int t,y;
    bool ok;
    string s;
    while(getline(cin,s))
    {
        t=0;
        ok=1;
        int s_end=s.size();
        if(s[0]==0&&s_end==1)break;
        for(int i=0; i<s_end; i++)
        {
            y=yee(s[i]);
            if(y!=-1)
            {
                t+=y;
                //printf("W");
            }
            else
            {
                ok=0;
                break;
            }
        }

        if(ok)
            printf("%d",t);
        else
            printf("Fail");
        printf("\n");
    }
    return 0;
}
