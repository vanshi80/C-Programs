#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a=3,b=5,c;
printf("Before swapping: %d %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("After swapping: %d %d",a,b);
c=a;
a=b;
b=c;
printf("Again swapping; %d %d",a,b);
getch();
}