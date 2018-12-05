#include<stdlib.h>
#include"snake.h"
#include<stdio.h>
void swap(int **a, int **b) {
	int *t=*a;
	*a=*b;
	*b=t;
}

void snake(const int *ptr_array[100][100], int m) {
	int **arr=malloc(10000*sizeof(int*));
	int mm=m*m;
	int i,j;
	for(i=0;i<mm;i++) {
		arr[i]=ptr_array[i/m][i%m];
	}
	for(i=0;i<mm;i++)
		for(j=0;j<mm-1;j++)
			if((*arr[j])>(*arr[j+1]))swap(&(arr[j]),&(arr[j+1]));
	for(i=0;i<mm;i++) {
		if((i/m)&1)ptr_array[i/m][m-1-i%m]=arr[i];
		else ptr_array[i/m][i%m]=arr[i];
	}
}
	
