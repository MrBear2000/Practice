#include<cstdio>
#include<cstring>
using namespace std;
bool solve(char c[],int l)
{
    if(l<=8)
    {
        int u;
        sscanf(c,"%d",&u);
        if(u%17)return false;
        return true;
    }
    int n=c[l]-'0';
    c[l]='\0';
    c[l-1]-=5*n;
    for(int k=l-1;k>0;k--)
    while(c[k]<'0')
    {
        c[k]+=10;
        c[k-1]--;
    }
    return solve(c,l-1);
}
int main()
{
    char d[105];
    while(scanf("%s",d)==1&&strcmp(d,"0"))
    {
        puts(solve(d,strlen(d)-1)?"1":"0");
    }
}
