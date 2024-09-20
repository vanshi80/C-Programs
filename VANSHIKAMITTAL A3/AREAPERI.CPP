#include<stdio.h>
#include<conio.h>
int main(){
 int s=3, l=4, b=6, r=5, B=5, H=9;
 float pi=3.14;
 clrscr();
 printf("Area and perimeter of the square: %d and %d",s*s,4*s);
 printf("Area and perimeter of the rectangle: %d and %d",l*b,2*(l+b));
 printf("Area and perimeter of the circle: %f and %f", (pi*r*r),2*pi*r);
 printf("Area of the triangle: %f",0.5*(B*H));
 return 0;
 }