#include<stdio.h>
int sumofarray(int arr[]){
    int sum=0;
    printf("The arr is %d",arr);
    for(int i=0;i<5;i++){
        sum+=*arr;
        *arr++;
    }
    return sum;
}
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int sum = sumofarray(arr);
    printf("\n%d",sum);
    return 0;
}
