#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int *(ptr)=(int *)malloc(n*sizeof(int));
	int *(arr)=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		ptr[i]=arr[i];
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
