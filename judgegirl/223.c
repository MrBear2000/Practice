#include<stdio.h>

const int dir[5][2]={{0,0},{-1,-1},{1,-1},{1,1},{-1,1}};

void sol(int u, int type, int x, int y) {
	if(u<2)return;
	if(u==2) {
		printf("%d %d %d\n",type, x, y);
		return;
	}
	sol(u>>1, type, x, y);
	int i;
	for(i=1;i<5;i++) {
		if(i==(type+1)%4+1)continue;
		sol(u>>1, i, x+dir[i][0]*(u>>2), y+dir[i][1]*(u>>2));
	}
}

int main() {
	int l,m;
	scanf("%d%d", &l,&m);
	int x=l/2;
	while((x<<1)>m) {
		sol(x<<1, 1, l-x, l-x);
		x>>=1;
	}
		
	return 0;
}
