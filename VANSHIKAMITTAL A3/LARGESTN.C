#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c;
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);

if(a>b)
{
if(a>c)
printf("a:%d is largest number",a);
else
printf("b:%d is largest number",b);
}
else if(b>c)

printf("b:%d is largest number",b);
else
printf("c:%d is largest number",c);

getch();
}