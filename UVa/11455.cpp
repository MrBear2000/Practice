#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,edge[4];
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            for(int i=0;i<4;i++)
                scanf("%d",edge+i);
            sort(edge,edge+4);
            if(edge[0]==edge[1]&&edge[1]==edge[2]&&edge[2]==edge[3])puts("square");
            else if(edge[0]==edge[1]&&edge[2]==edge[3])puts("rectangle");
            else if(edge[0]+edge[1]+edge[2]>edge[3])puts("quadrangle");
            else puts("banana");
        }
    }
}
