#include<cstdio>
#include<queue>
using namespace std;
int N,M;
char maze[110][110];
const int hc[]= {-2,-1,1,2,2,1,-1,-2},hr[]= {1,2,2,1,-1,-2,-2,-1};
struct Point
{
    int c,r,t;
    Point(int _c=0,int _r=0,int _t=0):c(_c),r(_r),t(_t) {}
};
Point operator +(const Point &A,const Point &B)
{
    return Point(A.c+B.c,A.r+B.r,A.t+B.t);
}
queue<Point>q;
bool ac(int c,int r)
{
    return c>=0&&c<M&&r>=0&&r<N;
}
void kni(int c0,int r0)
{
    int c,r;
    for(int i=0; i<8; i++)
    {
        c=c0+hc[i];
        r=r0+hr[i];
        if(ac(c,r)&&maze[c][r]=='.')
            maze[c][r]='#';
    }
}
void print()
{
    for(int i=0; i<M; i++)
        puts(maze[i]);
}
int dc[]= {1,1,1,0,-1,-1,-1,0},dr[]= {-1,0,1,1,1,0,-1,-1};
bool ok;
void bfs(Point p0)
{
    Point p;
    for(int i=0; i<8; i++)
    {
        p=p0+Point(dc[i],dr[i],1);
        if(ac(p.c,p.r))
        {
            if(maze[p.c][p.r]=='.')
            {
                maze[p.c][p.r]='@';
                q.push(p);
            }
            else if(maze[p.c][p.r]=='B')
            {
                ok=0;
                printf("Minimal possible length of a trip is %d\n",p.t);
            }
        }
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            ok=1;
            scanf("%d%d",&M,&N);
            for(int i=0; i<M; i++)
                scanf("%s",maze[i]);
            for(int i=0; i<M; i++)
                for(int j=0; j<N; j++)
                    if(maze[i][j]=='Z')
                        kni(i,j);
                    else if(maze[i][j]=='A')
                        q.push(Point(i,j,0));
            while(!q.empty()&&ok)
            {
                bfs(q.front());
                q.pop();
            }
            if(ok)
                puts("King Peter, you can't go now!");
                while(!q.empty())
                    q.pop();
        }
    }
}

