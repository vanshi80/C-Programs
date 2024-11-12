#include<stdio.h>
int main(){
    int max,arr[5],sec_large;
    printf("Enter the array ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    sec_large=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>sec_large && arr[i]!=max){
            sec_large = arr[i];
            // max=sec_large;
        }
    }
    printf("The second largest element is: %d\n",sec_large);
    return 0;
}