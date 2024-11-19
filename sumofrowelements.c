#include<stdio.h>
int main(){
	int i,j,a[2][2],sum=0;
	printf("enter the array elememts");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum+=a[i][j];
		}
		printf("sum of %d row is %d\n",i+1,sum);
		sum=0;
	}
	return 0;
}
