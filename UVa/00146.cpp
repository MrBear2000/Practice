#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char c[55];
    while(scanf("%s",c)==1&&c[0]!='#')
    {
        if(next_permutation(c,c+strlen(c)))
            puts(c);
        else
            puts("No Successor");
    }
}
