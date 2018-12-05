#include<cstdio>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
int main()
{
    int grape,grapeskin,n;
    string s;
    stringstream ss;
    bool chi,tu;
    while(scanf("%d",&n)==1)
    {
        getline(cin,s);
        while(n--)
        {
            grape=grapeskin=chi=tu=0;
            getline(cin,s);
            ss.clear();
            ss.str(s);
            while(ss>>s)
            {
                if(s=="chi")
                    grape++;
                else if(s=="tu")
                {
                    grapeskin++;
                    if(grapeskin>grape)
                        tu=true;
                }
            }
            chi=grape>grapeskin;
            if(chi&&tu)
                puts("chi pu tao bu tu pu tao pi, bu chi pu tao dao tu pu tao pi");
            else if(chi)
                puts("chi pu tao bu tu pu tao pi");
            else if(tu)
                puts("bu chi pu tao dao tu pu tao pi");
            else puts("chi pu tao tu pu tao pi");
        }
    }
}
