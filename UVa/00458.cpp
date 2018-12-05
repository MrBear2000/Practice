#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    //freopen(".txt","w",stdout);
    char c[300];
    int n;
    while(gets(c))
    {
        n=strlen(c);
        for(int i=0;i<n;i++)
            putchar(c[i]-7);
        puts("");
    }
    return 0;
}
