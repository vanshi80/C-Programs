#include<stdio.h>
int main(){
    int arr[5],count,s=0,a[5];
    printf("Enter the array");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        a[i]=-1;
    }
    for(int i=0;i<5;i++){
        count=1;
        if(a[i]!=-1){
            continue;
        }
        else{
            printf("Found the element %d at location %d\n",arr[i],i);
            for(int j=i+1;j<5;j++){
                // if(s && arr[j]!=s){
                    if(arr[i]==arr[j]){
                        printf("found the element %d at location  %d\n",arr[i],j);
                        count++;
                        a[j]=0;
                    }

                // }
            }
            printf("Found the element %d times\n",count);
            a[i] = 0;
        }
    }
    return 0;
}