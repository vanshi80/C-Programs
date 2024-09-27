//find odd and even
#include<stdio.h>
#include<conio.h>
void main(){
int n;
printf("Enter the number");
scanf("%d",&n);
if(n != 0){
if(n%2==0){
printf("even number");
}
else{
printf("Odd number");
}
}
else{
printf("no 0 allowed");
}
getch();
}
