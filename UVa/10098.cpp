#include<cstdio>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int n,sb,se;
    while(scanf("%d",&n)==1)
    {
        while(n--)
        {
            cin>>s;sort(s.begin(),s.end());
            do
            {
                cout<<s<<endl;
            }
            while(next_permutation(s.begin(),s.end()));
            putchar('\n');
        }
    }
}
