#include<stdio.h>
int table(int a,int i){
	if(i==11){
		return 1;
	}
	printf("%d\n",a*i);
	return table(a,i+1);
}
int main(){
	int a,i=1;
	printf("Enter the number");
	scanf("%d",&a);
	table(a,i);
	return 0;
}
