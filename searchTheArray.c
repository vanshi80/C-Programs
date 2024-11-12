#include<stdio.h>
int main(){
    int arr[5],n,mid,left,right;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to find in the array");
    scanf("%d",&n);
    left=0;
    right=5;
    do{
    mid=(left+right)/2;
    if(arr[mid]==n){
        printf("The element is found at:%d location of array",mid+1);
        break;
    }
    else{
        if(n>arr[mid]){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }

    }while(left<=right);

    return 0;
}