#include<cstdio>
using namespace std;
const int dx[]= {1,1,1,0,-1,-1,-1,0},dy[]= {1,0,-1,-1,-1,0,1,1};
int n,m;
bool isok(int x,int y)
{
    return x>=0&&x<m&&y>=0&&y<n;
}
char mine[105][105];
int main()
{
    //freopen(".txt","w",stdout);
    int kase=1;bool b=false;
    while(scanf("%d%d",&n,&m)==2&&(m||n))
    {
        if(b)puts("");
        b=true;
        for(int i=0; i<n; i++)
            scanf("%s",mine[i]);
        printf("Field #%d:\n",kase++);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                if(mine[i][j]=='.')
                {
                    int cnt=0;
                    for(int k=0; k<8; k++)
                        if(isok(j+dy[k],i+dx[k])&&mine[i+dx[k]][j+dy[k]]=='*')cnt++;
                    printf("%d",cnt);
                }
                else putchar('*');
            puts("");
        }
    }
    return 0;
}
