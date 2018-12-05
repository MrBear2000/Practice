#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<cstring>
using namespace std;
vector<int>v;
bool is_prime(int n)
{
    int sn=sqrt(n);
    for(int i=0;v[i]<=sn;i++)
        if(!(n%v[i]))
        return false;
    return true;
}
int main()
{
    v.clear();
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    for(int i=9;i<1010;i+=2)
    {
        //printf("%d\n",i);
        if(is_prime(i))
            v.push_back(i);
    }
    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%d ",n);
        if(!is_prime(n))
            puts("is not prime.");
        else
        {//reserve
            int rn;
            char str[9];
            sprintf(str,"%d",n);
            reverse(str,str+strlen(str));
            sscanf(str,"%d",&rn);
            if(rn!=n&&is_prime(rn))
                puts("is emirp.");
            else puts("is prime.");
        }
    }
}
