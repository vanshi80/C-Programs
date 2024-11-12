#include<stdio.h>
int calcPow(int n,int p){
	if(p==0){
		return 1;
	}
	else 
	   return n*calcPow(n,p-1);
}
int main(){
	int n,p,power;
	printf("Enter the number");
	scanf("%d",&n);
	printf("Enter the power");
	scanf("%d",&p);
	power = calcPow(n,p);
	printf("%d",power);
	
	return 0;
}

