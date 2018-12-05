#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
bool is_prime(int n)
{
    if(n==1)return true;
    int sn=sqrt(n);
    for(int i=1;prime[i]<=sn;i++)
        if(!(n%prime[i]))return false;
    return true;
}
int main()
{
    char c[25];
    int sum;
    while(scanf("%s",c)==1)
    {
        int l=strlen(c);
        sum=0;
        for(int i=0;i<l;i++)
        {
            if(islower(c[i]))
                sum+=c[i]-'a'+1;
            else
                sum+=c[i]-'A'+27;
        }
        printf("%s\n",is_prime(sum)? "It is a prime word.":"It is not a prime word.");
    }
}
