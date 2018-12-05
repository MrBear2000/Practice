#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n,x,y,yee;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%d%d",&x,&y);
            yee=100-abs(x+y);
            if(0<yee&&yee<=30)puts("sad!");
            else if(yee>30&&yee<=60)puts("hmm~~");
            else if(yee>60&&yee<100)puts("Happyyummy");
            else puts("evil!!");
        }
    }
}
