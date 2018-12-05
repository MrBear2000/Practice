#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
struct Point
{
    int x,y,t;
    Point(int _x=0,int _y=0,int _t=0):x(_x),y(_y),t(_t){}
};

    bool operator==(const Point a,const Point b)
    {
        return a.x==b.x&&a.y==b.y;
    }
bool ok(Point p)
{
    return p.x>=0&&p.x<8&&p.y>=0&&p.y<8;
}
const int dx[]={1,2,2,1,-1,-2,-2,-1},dy[]={2,1,-1,-2,-2,-1,1,2};
int bfs(Point s,Point e)
{
    if(s==e)return 0;
    bool board[8][8];
    memset(board,false,sizeof(board));
    queue<Point>q;
    q.push(s);
    Point p0,p;
    while(!q.empty())
    {
        p0=q.front();
        for(int i=0;i<8;i++)
        {
            p=Point(p0.x+dx[i],p0.y+dy[i],p0.t+1);
            if(p==e)
                return p.t;
            else if(ok(p)&&!board[p.x][p.y])
            {
                board[p.x][p.y]=true;
                q.push(p);
            }
        }
        q.pop();
    }
}
int main()
{
    char S[3],E[3];
    while(scanf("%s %s",S,E)==2)
    {
        printf("To get from %s to %s takes %d knight moves.\n",S,E,bfs(Point(S[0]-'a',S[1]-'1'),Point(E[0]-'a',E[1]-'1')));
    }
}

