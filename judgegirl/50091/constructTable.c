#include<stdlib.h>
int ***constructTable(int A[], int B[]) {
	int lenA=0;
	while(A[lenA])lenA++;
	int ***res=malloc(lenA*sizeof(int**));
	int *ptr=B;
	int i;
	for(i=0;i<lenA;i++) {
		res[i]=malloc(A[i]*sizeof(int*));
		int j;
		for(j=0;j<A[i];j++) {
			res[i][j]=ptr;
			while(*(ptr++));
		}
	}
	return res;
}


