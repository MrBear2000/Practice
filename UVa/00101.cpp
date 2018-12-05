#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
vector<int>pile[30];
int maxn;
void find_block(int a,int&p,int&h)
{
    for(p=0; p<maxn; p++)
        for(h=0; h<pile[p].size(); h++)
            if(pile[p][h]==a)return;
}
void clear_above(int p,int h)
{
    for(int i=h+1; i<pile[p].size(); i++)
        pile[pile[p][i]].push_back(pile[p][i]);
    pile[p].resize(h+1);
}
void pile_onto(int p,int h,int p2)
{
    for(int i=h; i<pile[p].size(); i++)
        pile[p2].push_back(pile[p][i]);
    pile[p].resize(h);
}
void ini()
{
    for(int i=0; i<maxn; i++)
    {
        pile[i].clear();
        pile[i].push_back(i);
    }
}
int main()
{
    char s1[10],s2[10];
    int a,b;
    while(scanf("%d",&maxn)==1)
    {
        ini();
        while(scanf("%s",s1))
        {
            if(!strcmp(s1,"quit"))break;
            scanf("%d%s%d",&a,s2,&b);
            if(a==b)continue;
            int pa,pb,ha,hb;
            find_block(a,pa,ha);
            find_block(b,pb,hb);
            if(pa==pb)continue;
            if(!strcmp(s2,"onto"))clear_above(pb,hb);
            if(!strcmp(s1,"move"))clear_above(pa,ha);
            pile_onto(pa,ha,pb);
        }
        for(int i=0;i<maxn;i++)
        {
            printf("%d:",i);
            for(int j=0;j<pile[i].size();j++)
                printf(" %d",pile[i][j]);
            puts("");
        }
    }
    return 0;
}
