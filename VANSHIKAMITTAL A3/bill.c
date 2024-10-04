// this is a program to find out the electricity bill of a customer
#include<stdio.h>
#include<conio.h>
void main(){
    char c[20];
    int id;
    double units;
    long double bill=0.0;
    printf("Enter your ID, name and the units consumed");
    scanf("%d %s %lf",&id, &c, &units);
    printf("%d %s %.2lf",id,c,units);
    if(units<=199){
        bill = units*1.20;
    }
    else if(units>=200 && units<400){
        bill = units*1.50;
    }
    else if(units>=400 && units<600){
        bill = units*1.80;
        bill+=0.15 *bill;
    }
    else if(units>=600){
        bill = units*2.00;
        bill+=0.15 *bill;
    }
    else{
        printf("Something wrong!");
    }
    if(bill>100){
        printf("%s your bill is : %.2Lf",c,bill);
    }
    else{
        printf("your bill is less than 100 so not acceptable");
    }
    getch();
}