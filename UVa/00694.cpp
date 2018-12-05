#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    int kase=1,A,lim,t;
    while(scanf("%d%d",&A,&lim)&&A>=0&&lim>=0)
    {
        printf("Case %d: A = %d, limit = %d, number of terms = ",kase++,A,lim);
        t=0;
        while(A>=0&&A<=lim)
        {
            t++;
            if(A&1)A=A*3+1;
            else A/=2;
            if(A==1){t++;break;}
            //printf("t=%d %d\n",t,A);
        }
        printf("%d\n",t);
    }
}

