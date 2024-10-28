#include<stdio.h>
// 1
// 2 3
// 4 5 6

int main(){
    int k=1;
    for(int i=0;i<3;i++){
        for(int j = 0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<3;i++){
        for(int j = 1;j<=i;j++){
            printf("%d",i+j);
            // k=j;
        }
        printf("\n");
        // printf("printing k: %d\n",k);
    }
    return 0;
}