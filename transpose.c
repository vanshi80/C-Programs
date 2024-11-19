#include<stdio.h>
int main(){
	int i,j,arr[2][2],a[2][2];
	printf("enter the array elements");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			a[j][i]=arr[i][j];
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
