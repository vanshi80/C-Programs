#include<stdio.h>
#include<stdlib.h>
int main(){
	int n1,n2,i,j;
	scanf("%d",&n1);
	scanf("%d",&n2);
	int *ptr1= (int*)malloc(n1*sizeof(int));
	int *ptr2= (int*)calloc(n2,sizeof(int));
	for(i=0;i<n1;i++){
		scanf("%d",&ptr1[i]);
	}
	for(i=0;i<n2;i++){
		scanf("%d",&ptr2[i]);
	}
	int max1 = ptr1[0];
	int max2 = ptr2[0];
	for(i=0;i<n1;i++){
		if(ptr1[i]>max1){
			max1=ptr1[i];
		}
	}
	for(i=0;i<n2;i++){
		if(ptr2[i]>max2){
			max2=ptr2[i];
		}
	}
	if(max1>max2)printf("%d",max1);
	else printf("%d",max2);
	return 0;
	}
