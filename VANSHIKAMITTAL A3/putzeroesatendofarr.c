#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter the array ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]==0){
            for(int j=i;j<5;j++){
                arr[j]=arr[j+1];
            }
            arr[4]=0;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}