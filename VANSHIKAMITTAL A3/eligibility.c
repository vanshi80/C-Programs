#include<stdio.h>
#include<conio.h>
void main(){
    int p,m,c;
    printf("Enter marks in Physics,Chemistry and Maths");
    scanf("%d %d %d",&p,&c,&m);
    if(m>=65 && p>=55 && c>=50){
        if((m+p+c)>=190 || (m+p)>=140){
            printf("Eligible");
        }
        else{
            printf("not eligible");
        }
    }
    else{
        printf("Not eligible");
    }
    getch();
}