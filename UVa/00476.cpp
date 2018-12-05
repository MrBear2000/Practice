#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
struct Rectangle
{
    float xl,xr,yu,yd;
    Rectangle(){}
    void init()
    {
        xl=xr=yu=yd=0;
    }
    void in()
    {
        scanf(" %f %f %f %f",&xl,&yu,&xr,&yd);
    }
}r[15];
struct Point
{
    float x,y;
    Point(){}
    bool in()
    {
        char a[30],b[30];
        scanf("%s %s",a,b);
        sscanf(a,"%f",&x);
        sscanf(b,"%f",&y);
        return strcmp(a,"9999.9")||strcmp(b,"9999.9");
    }
};
bool contain(Point P,Rectangle R)
{
    return P.x>R.xl&&P.x<R.xr&&P.y>R.yd&&P.y<R.yu;
}
int main()
{
    for(int i=0;i<15;i++)
        r[i].init();
    int cnt=0;
    char c;
    while(scanf("%s",&c)&&c!='*')
    {
        r[cnt++].in();
    }
    Point p;
    int k=1;
    while(p.in())
    {
        bool ok=1;
        for(int i=0;i<cnt;i++)
        {
            if(contain(p,r[i]))
            {
                printf("Point %d is contained in figure %d\n",k,i+1);
                ok=0;
            }
        }
        if(ok)printf("Point %d is not contained in any figure\n",k);
        k++;
    }
}
