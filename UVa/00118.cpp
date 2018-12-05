#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int Max_x,Max_y;
struct Point
{
    int x,y;
    Point(int _x=0,int _y=0):x(_x),y(_y) {}
};
bool operator==(const Point a,const Point b)
{
    return a.x==b.x&&a.y==b.y;
}
bool ok(int x,int y)
{
    return x>=0&&x<=Max_x&&y>=0&&y<=Max_y;
}
vector<Point>v;
void sol(int x,int y,char c,string s)
{
    const int dx[]= {1,0,-1,0},dy[]= {0,-1,0,1};
    const char d[]="ESWN";
    int dir;
    for(int i=0; i<4; i++)
        if(c==d[i])
        {
            dir=i;
            break;
        }
    int s_=s.length();
    for(int i=0; i<s_; i++)
    {
        //printf("Now is at %d %d %c\n",x,y,d[dir]);//test

        if(s[i]=='R')
            dir=(dir+1)%4;
        else if(s[i]=='L')
            dir=(dir+3)%4;
        else if(s[i]=='F')
        {
            x+=dx[dir];
            y+=dy[dir];
            if(!ok(x,y))
                if(find(v.begin(),v.end(),Point(x-dx[dir],y-dy[dir]))==v.end())
                {
                    printf("%d %d %c LOST\n",x-dx[dir],y-dy[dir],d[dir]);
                    v.push_back(Point(x-dx[dir],y-dy[dir]));
                    return;
                }
                else
                {
                    x-=dx[dir];
                    y-=dy[dir];
                }
        }
    }
    printf("%d %d %c\n",x,y,d[dir]);
}
int main()
{
    int x,y;
    char c;
    string s;
    scanf("%d%d",&Max_x,&Max_y);
    while(scanf("%d %d %c",&x,&y,&c)!=EOF)
    {
        cin>>s;
        sol(x,y,c,s);
    }
}
