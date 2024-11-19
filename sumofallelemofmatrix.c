#include<stdio.h>
int main(){
    int a[5][5],sum=0;
    printf("enter the array elements");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum+=a[i][j];
        }
    }
    printf("Sum of all elements is:%d\n",sum);
    return 0;
}