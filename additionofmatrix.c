#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],add[2][2],sum=0;
	printf("enter the array elememts");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",add[i][j]);
		}
	}
	return 0;
}
