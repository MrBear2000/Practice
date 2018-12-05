#include<cmath>
#include<cstdio>
using namespace std;
const double PI=acos(-1);
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)==2)
    {
        printf("%.3f\n",PI*b/4*sqrt(b*b-a*a));
    }
}
