#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i=0;
    string s;
    while(cin>>s&&s!="#")
    {
        printf("Case %d: ",++i);
        if(s=="HELLO")
            puts("ENGLISH");
        else if(s=="HOLA")
            puts("SPANISH");
        else if(s=="HALLO")
            puts("GERMAN");
        else if(s=="BONJOUR")
            puts("FRENCH");
        else if(s=="CIAO")
            puts("ITALIAN");
        else if(s=="ZDRAVSTVUJTE")
            puts("RUSSIAN");
        else puts("UNKNOWN");
    }
}
