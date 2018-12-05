#include<stdio.h>
#define maxn 15
#define maxm 260
 
char name[maxn][70];
int bingo_r[maxn][maxm];
int bingo_c[maxn][maxm];
int bingo_d[maxn][2];
int index[maxn][maxm*maxm][2];
int num[maxm*maxm];
 
int main()
{
    int n,m;
 
    //input
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%s",name[i]);
        for(int j=0;j<m;j++)
            for(int k=0;k<m;k++)
            {
                int x;
                scanf("%d",&x);
                index[i][x][0]=j;
                index[i][x][1]=k;
            }    
    }
    int mm=m*m;
    for(int i=0;i<mm;i++)
        scanf("%d",&num[i]);
 
    //logic
    int winner=0;
    int u=0;
    int winner_index[maxn];
	for(int i=0;i<mm;i++) {
		for(int j=0;j<n;j++) {
			int r=index[j][num[i]][0];
			int c=index[j][num[i]][1];
			bingo_r[j][r]++;
			bingo_c[j][c]++;
			if(r==c)bingo_d[j][0]++;
			if(r+c==m-1)bingo_d[j][1]++;
			if(bingo_r[j][r]==m||bingo_c[j][c]==m||bingo_d[j][0]==m||bingo_d[j][1]==m) {
				winner=1;
				winner_index[u++]=j;
			}
		}
		
		if(winner) {
			printf("%d",num[i]);
			break;
		}
	}

    for(int i=0;i<u;i++)
    {
        printf(" %s",name[winner_index[i]]);
    }
    printf("\n");
 
    return 0;
}
