#include<stdio.h>
int main(){
    int a[2][2],b[2][2],add[2][2];
    printf("enter the array elements");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            add[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
    }