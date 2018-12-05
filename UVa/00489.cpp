#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    bool used[26],ans_al[26];
    int n,t;
    char ans[100],guess[100];
    while(scanf("%d",&n)==1&&n!=-1)
    {
        t=0;
        memset(used,false,sizeof(used));
        memset(ans_al,false,sizeof(ans_al));
        scanf("%s",ans);
        int l=strlen(ans);
        for(int i=0; i<l; i++)
            ans_al[ans[i]-'a']=true;
        scanf("%s",guess);
        l=strlen(guess);
        for(int i=0; i<l; i++)
            if(!used[guess[i]-'a'])
            {
                used[guess[i]-'a']=true;
                if(ans_al[guess[i]-'a'])
                    ans_al[guess[i]-'a']=false;
                else
                    t++;
                if(t==7)break;
            }
        bool ok=false;
        for(int i=0; i<26; i++)
            if(ans_al[i])
            {
                ok=true;
                break;
            }
        printf("Round %d\n",n);
        if(!ok)puts("You win.");
        else if(t==7)puts("You lose.");
        else puts("You chickened out.");
    }
    return 0;
}
