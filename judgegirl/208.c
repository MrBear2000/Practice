#include<stdio.h>

int main()
{
	int n,m;
	char c[2];
	scanf("%d%d",&n,&m);
	scanf(" %c %c", c+1, c);
	unsigned int u;
	int x=0;
	int i;
	for(i=0;i<m;i++) {
		int j;
		for(j=0;j<n;j++) {
			if(!x) {
				scanf("%u",&u);
				x=32;
			}
			--x;
			printf("%c",c[(u>>x)&1]);
		}
		printf("\n");
	}
	return 0;
}
