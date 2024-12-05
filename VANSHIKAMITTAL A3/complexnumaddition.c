#include<stdio.h>
struct Complex{
    int real;
    int imag;
}num1,num2;
int main(){
    scanf("%d",&num1.real);
    scanf("%d",&num1.imag);
    scanf("%d",&num2.real);
    scanf("%d",&num2.imag);
    printf("%d + %d i\n",num1.real,num1.imag);
    printf("%d + %d i\n",num2.real,num2.imag);
    printf("%d + %di",num1.real+num2.real,num2.imag+num2.imag);
    return 0;
}
