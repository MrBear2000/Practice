#include<stdio.h>
#include<stdlib.h>

int main() {
	char name[250];
	scanf("%s", name);

	FILE *fp = fopen(name, "rb");
	int n;	
	fread(&n, sizeof(int), 1, fp);
	int *cnt=(int*)calloc(70000, sizeof(int));
	short x;
	while(n--) {
		fread(&x, sizeof(short),1,fp);
		cnt[x+32768]++;
	}
	fclose(fp);
	int i,m=-1,ans;
	for(i=-32768;i<32768;i++) {
		if(cnt[i+32768]>=m) {
			m=cnt[i+32768];
			ans=i;
		}
	}
	printf("%d\n%d\n", ans, m);
	return 0;
}	
