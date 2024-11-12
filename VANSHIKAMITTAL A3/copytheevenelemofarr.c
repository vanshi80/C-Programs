#include<stdio.h>
int main(){
    int arr[5],a[5],j=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            a[j]=arr[i];
            printf("%d ",a[j]);
            j++;
        }
    }
    return 0;
}