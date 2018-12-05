#include<stdio.h>
#include<string.h>
#include<ctype.h>

int skip(char s[]) {
	const char *c[]={"of", "and", "the", "at", "of.", "and.", "the.", "at."};
	int i;
	for(i=0;i<8;i++) {
		if(strcmp(s,c[i])==0)return 1;
	}
	return 0;
}

int main() {
	char s[200];
	char ans[200];
	int cur=0;
	while(~scanf("%s",s)) {
		int l=strlen(s);
		if(!skip(s)) {
			ans[cur++]=toupper(s[0]);
		}

		if(s[l-1]=='.') {
			puts(ans);
			memset(ans,0,sizeof(ans));
			cur=0;
		}
	}
	return 0;
}
