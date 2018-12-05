#include<stdio.h>
#define ll long long

int dist(unsigned char a, unsigned char b) {
	unsigned char c=a^b;
	int i, res=0;
	for(i=0;i<8;i++) {
		if(c>>i & 1)res++;
	}
	return res;
}

int main() {
	int n,m,p;
	unsigned char valid[50];
	scanf("%d%d%d", &n, &m, &p);
	int i,j;
	ll l;
	for(i=0;i<m;i++) {
		scanf("%llu", &l);
		for(j=0;j<8;j++) {
			valid[i*8+j]=(unsigned char)(l>>(8*(7-j)));
		}
	}
	unsigned char uc;
	for(i=0;i<p;i++) {
		scanf("%hhu", &uc);
		for(j=0;j<n;j++) {
			int r=dist(valid[j], uc);
			if(r<2) {
				printf("%hhu\n", r==1?valid[j]:uc);
				break;
			}
		}
	}
	return 0;
} 
