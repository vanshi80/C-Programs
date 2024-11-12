#include<stdio.h>
int gcd(int a,int b,int small){
	if(a%small == 0 && b%small==0){
		return small;
	}
	if(small>0){
		gcd(a,b,small-1);
	}

}
int main(){
	int a,b,small,hcf;
	printf("Enter the two numbers to find the gcd");
	scanf("%d %d",&a,&b);
//	a>b?small=b:small=a;
	if(a<b) small=a;
	else small=b;
	hcf = gcd(a,b,small);
	printf("%d",hcf);
	
	return 0;
}

