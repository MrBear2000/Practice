#include<cstdio>
#include<string>
#include<sstream>
#include<iostream>
#include<cctype>
#include<vector>
using namespace std;
int main()
{
    int kase=1,k,e;
    string s0,s,f[25];
    stringstream ss;
    vector<string>v;
    while(scanf("%d%d",&k,&e)==2)
    {
        int m=-1;
        v.clear();
        getline(cin,s);
        for(int i=0; i<k; i++)
            getline(cin,f[i]);
        while(e--)
        {
            getline(cin,s0);
            string p=s0;
            int sl=s0.length();
            for(int i=0; i<sl; i++)
            {
                if(isalpha(s0[i]))
                    s0[i]=tolower(s0[i]);
                else s0[i]=' ';
            }
            ss.clear();
            ss.str(s0);
            int cnt=0;
            while(ss>>s)
            {
                for(int i=0; i<k; i++)
                    if(s==f[i])
                    {
                        cnt++;
                        break;
                    }
            }
            if(cnt>m)
            {
                v.clear();
                v.push_back(p);
                m=cnt;
            }
            else if(cnt==m)
                v.push_back(p);
        }
        printf("Excuse Set #%d\n",kase++);
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
        puts("");
    }
}
