#include<cstdio>
using namespace std;
struct Room
{
    int n;
    char peo[25][25];
    Room(int _n=0):n(_n) {}
    void in()
    {
        for(int i=0; i<n; i++)
            scanf("%s",peo[i]);
    }
    bool operator==(const Room r)
    {
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(peo[i][j]!=r.peo[i][j])goto a;
        return true;
a:
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(peo[i][j]!=r.peo[j][n-1-i])goto b;
        return true;
b:
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(peo[i][j]!=r.peo[n-1-i][n-1-j])goto c;
        return true;
c:
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                if(peo[i][j]!=r.peo[n-1-j][i])return false;
        return true;
    }
};
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)==2)
    {
        Room mem(n),now(n);
        mem.in();
        int cnt=0;
        while(k--)
        {
            now.in();
            if(mem==now)cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
