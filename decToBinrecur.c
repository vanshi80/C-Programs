#include<stdio.h>
void decToBin(int n){
	if(n>1){
		decToBin(n/2);
	}
	printf("%d",n%2);
}
int main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	decToBin(n);
	return 0;
}
