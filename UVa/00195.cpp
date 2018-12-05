#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const char alpha[]="AaBbCcDdEeFfGgHhIiJjLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
bool compare(char x,char y)
{
    if(x==y)
        return false;
    for(int i=0; i<52; i++)
        if(alpha[i]==x)
            return true;
        else if(alpha[i]==y)
            return false;
}
int main()
{
    char c[100];
    int n;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            scanf("%s",c);
            int sl=strlen(c);
            sort(c,c+sl,compare);
            do
            {
                puts(c);
            }
            while(next_permutation(c,c+sl,compare));

        }
    }
}
