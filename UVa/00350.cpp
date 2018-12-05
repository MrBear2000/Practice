#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    int Z,I,M,L,k,kase=1;
    int cycle[10000];
    while(scanf("%d%d%d%d",&Z,&I,&M,&L)==4&&(Z||I||M||L))
    {
        k=1;
        memset(cycle,0,sizeof(cycle));
        cycle[L]=k++;
        while(1)
        {
            L=(Z*L+I)%M;
            if(cycle[L])
            {
                printf("Case %d: %d\n",kase++,k-cycle[L]);
                break;
            }
            else
            {
                cycle[L]=k++;
            }
        }
    }
}
