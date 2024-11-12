#include<stdio.h>
#include<conio.h>
int sumOfDig(int n,int sum){
	sum+=n%10;
	if(n>0){
		sumOfDig(n/10,sum);
	}
	else{
		return sum;
	}
	
	
}
void main(){
	int n,sum,s=0;
	printf("enter the number");
	scanf("%d",&n);
	sum =sumOfDig(n,s);
	printf("%d",sum);
	
	getch();
}

