#include<stdio.h>

int n;
int ccnt[20];
int diag[40][2];	// '\' and '/' respectively
int block[20][20];
int dfs(int row) {
	if(row==n)return 1;
	int res=0;
	int column;
	for(column=0;column<n;column++) {
		int d1=column-row+n-1;
		int d2=column+row;
		if(!ccnt[column]&&!diag[d1][0]&&!diag[d2][1]&&!block[column][row]) {
			ccnt[column]=diag[d1][0]=diag[d2][1]=1;
			res+=dfs(row+1);
			ccnt[column]=diag[d1][0]=diag[d2][1]=0;
		}
	}
	return res;
}

int main() {
	int i,j;
	char c;
	int kase=0;
	while(~scanf("%d",&n)&&n) {
		for(i=0;i<n;i++)
			for(j=0;j<n;j++) {
				scanf(" %c",&c);
				block[i][j]=(c=='.'?0:1);
			}
		printf("Case %d: %d\n",++kase,dfs(0));
	}
	return 0;
}
