#include<cstdio>
#include<queue>
using namespace std;
int L,R,C;
struct Point
{
    int l,r,c,t;
    Point(int _l=0,int _r=0,int _c=0,int _t=0):l(_l),r(_r),c(_c),t(_t){}
};
bool ok(Point p)
{
    return p.l>=0&&p.r>=0&&p.c>=0&&p.l<L&&p.r<R&&p.c<C;
}
char maze[35][35][35];//L,R,C
int dl[]={1,-1,0,0,0,0},dr[]={0,0,1,-1,0,0},dc[]={0,0,0,0,1,-1};
void bfs(Point start)
{
    maze[start.l][start.r][start.c]='#';
    queue<Point>q;
    q.push(start);
    Point p0,p;
    while(!q.empty())
    {
        p0=q.front();
        for(int i=0;i<6;i++)
        {
            p=Point(p0.l+dl[i],p0.r+dr[i],p0.c+dc[i],p0.t+1);
            if(ok(p))
            {
                if(maze[p.l][p.r][p.c]=='.')
                    {
                        q.push(p);
                        maze[p.l][p.r][p.c]='#';
                    }
                else if(maze[p.l][p.r][p.c]=='E')
                {
                    printf("Escaped in %d minute(s).\n",p.t);
                    return;
                }
            }
        }
        q.pop();
    }
    puts("Trapped!");
}
int main()
{
    Point p;
    while(scanf("%d%d%d",&L,&R,&C)==3&&(L||R||C))
    {
        for(int i=0;i<L;i++)
            for(int j=0;j<R;j++)
            for(int k=0;k<C;k++)
        {
            scanf(" %c",&maze[i][j][k]);
            if(maze[i][j][k]=='S')
                p=Point(i,j,k,0);
        }
        bfs(p);
    }
}

