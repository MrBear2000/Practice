#include<stdio.h>

int main() {
	int t,i;
	unsigned long long int l;
	unsigned int n;
	unsigned short s;
	char cc[3]={0}, ins[10];
	scanf("%d", &t);
	if(t==0) {
		while(~scanf("%s %u %hu %s", ins, &n,&s,cc)) {
			l=0;
			int u=0;
			l=0;
			for(i=0;i<4;i++) {
				if(ins[i]=='L') {
					l = (l<<32)|n;
				}
				else if(ins[i]=='S') {
					l = (l<<16)|s;
				}
				else {
					l = (l<<8)|cc[u++];
				}
			} 
			printf("%llu\n", l); 

		}
	}
	else{
		while(~scanf("%s %llu", ins, &l)) {
			int u=2;
			for(i=3;i>=0;i--) {
				if(ins[i]=='L') {
					n=(unsigned int)l;
					l>>=32;
				}
				else if(ins[i]=='S') {
					s=(unsigned short)l;
					l>>=16;
				}
				else {
					cc[--u]=(char)l;
					l>>=8; 
				}
			} 

			printf("%u %hu %s\n", n,s,cc);
		}
	}

	return 0;
}

