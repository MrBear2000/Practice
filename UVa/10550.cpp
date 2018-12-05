#include<cstdio>
using namespace std;
int main()
{
    int s,a,b,c,sum;
    while(scanf("%d%d%d%d",&s,&a,&b,&c)==4&&(s||a||b||c))
    {
        sum=120+(s-a+40)%40+(b-a+40)%40+(b-c+40)%40;
        printf("%d\n",sum*9);
    }
}
