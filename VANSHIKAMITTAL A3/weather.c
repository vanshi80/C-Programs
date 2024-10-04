#include<stdio.h>
#include<conio.h>
void main(){
    float temp;
    printf("Enter the temperature in degree celcius");
    scanf("%f", &temp);
    if(temp<0){
        printf("freezing Cold");
    }
    else if(temp>0 && temp<=10){
        printf("Very cold");
    }
    else if(temp>10 && temp<=20){
        printf("Cold weather");
    }
    else if(temp>20 && temp<=30){
        printf("normal");
    }
    else if(temp>30 && temp<=40){
        printf("hot");
    }
    else if(temp>40){
        printf("Very hot");
    }

    getch();
}