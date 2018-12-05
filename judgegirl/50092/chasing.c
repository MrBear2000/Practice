#include<ctype.h>
#include<stdio.h>
typedef struct foo{
	char ins;
	int isvalid,from,to;
}foo;

foo check(char s[], int a, int b, int c) {
	foo res;
	res.isvalid=0;
	char trash[100];
	char u,v;
	int x=sscanf(s," %c %d %c %d %s",&u,&res.from,&v,&res.to,trash);
	if(x==4&&((u=='A'&&res.from<a&&res.to<b)||(u=='B'&&res.from<b&&res.to<c))&&v-u==1&&res.from>=0&&res.to>=0) {
		res.isvalid=1;
		res.ins=u;
		return res;
	}
	/*
	int p=0;
	while(s[p]==' ')p++;
	if((s[p]=='A'||s[p]=='B')&&s[p+1]==' ') {
		char c=s[p];
		int n=0;
		p+=2;
		if(!isdigit(s[p]))return res;
		for(;isdigit(s[p]);p++) n=n*10+(s[p]-'0');
		if((c=='A'&&n<a||c=='B'&&n<b)&&
				s[p]==' '&&s[p+2]==' '&&s[p+1]==s[0]+1) {
			p+=3;
			if(!isdigit(s[p]))return res;
			int m=0;
			for(;isdigit(s[p]);p++) m=m*10+(s[p]-'0');
			while(s[p]==' ')p++;
			if((c=='A'&&m<b||c=='B'&&m<c)&&s[p]=='\n') {
				res.isvalid=1;
				res.ins=c;
				res.from=n;
				res.to=m;
				return res;
			}
		}
	}
	*/
	return res;
}

void chasing(int **A[], int a, int *B[], int b, int C[], int c) {
	//init
	int i=0;
	for(i=0;i<a;i++)A[i]=NULL;
	for(i=0;i<b;i++)B[i]=NULL;
	char s[100];
	while(fgets(s,100,stdin)) {
		foo f=check(s,a,b,c);
		printf("%d\n",f.isvalid);
		if(f.isvalid) {
			char c=f.ins;
			if(c=='A') A[f.from]=&B[f.to];
			else B[f.from]=&C[f.to];
		}
	}
}

