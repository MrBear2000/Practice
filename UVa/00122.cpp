#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
struct Node
{
    bool have_value;
    Node*left,*right;
    int v;
    Node():have_value(false),left(NULL),right(NULL) {}
};
Node*newnode()
{
    return new Node();
}
Node*root;
bool failed;
void addnode(int v,char*s)
{
    int n=strlen(s);
    Node*u=root;
    for(int i=0;i<n;i++)
        if(s[i]=='L')
        {
            if(u->left==NULL)u->left=newnode();
            u=u->left;
        }
        else if(s[i]=='R')
        {
            if(u->right==NULL)u->right=newnode();
            u=u->right;
        }
    if(u->have_value)failed=true;
    u->v=v;
    u->have_value=true;
}
char s[100];
bool read_input()
{
    failed=false;
    root=newnode();
    for(;;)
    {
        if(scanf("%s",s)!=1)return false;
        if(!strcmp(s,"()"))break;
        int v;
        sscanf(&s[1],"%d",&v);
        addnode(v,strchr(s,',')+1);
    }
    return true;
}
bool bfs(vector<int>&ans)
{
    queue<Node*>q;
    ans.clear();
    q.push(root);
    while(!q.empty())
    {
        Node*u=q.front();
        q.pop();
        if(!u->have_value)return false;
        ans.push_back(u->v);
        if(u->left!=NULL)q.push(u->left);
        if(u->right!=NULL)q.push(u->right);
    }
    return true;
}
int main()
{
    vector<int>ans;
    while(read_input())
    {
        if(!bfs(ans)||failed){puts("not complete");continue;}
        int n=ans.size();
        for(int i=0;i<n-1;i++)
            printf("%d ",ans[i]);
        printf("%d\n",ans[n-1]);
    }
    return 0;
}
