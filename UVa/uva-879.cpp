#include<cstdio>
#include<cstring>
#include<sstream>
#include<algorithm>
using namespace std;
int p[1000010];

int find(int x)
{
    return x==p[x]?x:(p[x]=find(p[x]));
}

int uni(int x,int y)
{
    x=find(x);
    y=find(y);
    if(x==y)return 0;
    p[x]=y;
    return 1;
}

int main()
{
    int n,m;
    scanf("%d",&n);
    char line[10000];
    while (getchar() != '\n');
    while (getchar() != '\n');
    while(n--)
    {
        scanf("%d",&m);
        while (getchar() != '\n');
        //initialize
        for(int i=1; i<=m; i++)
            p[i]=i;

        //input
        int a,b,ans=m;
        while(gets(line)&&line[0]!='\0')
        {
            stringstream ss(line);
            while(ss>>a>>b)
            {
                ans-=uni(a,b);
            }
        }


        printf("%d\n",ans);
        if(n)puts("");
    }

    return 0;
}
/*
1

14
1 11 7 11 2 12 12 8 11 12 3 13 4 13 13 14 14 9 5 14 6 10
*/
