#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    const char s[]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    char c;
    int i;
    while((c=getchar())!=EOF)
    {
        for(i=0;s[i]&&s[i]!=c;i++);
        if(s[i])putchar(s[i-1]);
        else putchar(c);
    }
    return 0;
}
