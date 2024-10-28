#include<stdio.h>
int main(){
    int d,m,y,j,k,f;
    printf("Enter the day, month and year one by one :");
    scanf("%d %d %d",&d,&m,&y);
    if(m==1 || m==2){
        m+=12;
        y-=1;
    }
    j=y/100;
    k=y%100;

    f = (d+((13*(m+1))/5)+k+(k/4)+(j/4)+5*j)%7;
    printf("%d\n",f);

    switch(f){
        case 0: printf("Saturday\n");
                break;
        case 1: printf("Sunday\n");
                break;
        case 2: printf("Monday\n");
                break;
        case 3: printf("Tuesday\n");
                break;
        case 4: printf("Wednesday\n");
                break;
        case 5: printf("Thursday\n");
                break;
        case 6: printf("Friday\n");
                break;
        default: printf("Wrong input! Please try again.\n");
    }
    return 0;
}