#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        int a,b;
        bool f=true,u[n]={false};
        scanf("%d",&a);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&b);
            if(!f)continue;
            int x=abs(b-a);
            if(x&&(x>=n||u[x])){f=false;continue;}
            u[x]=true;
            a=b;
        }
        puts(f?"Jolly":"Not jolly");
    }
    return 0;
}
