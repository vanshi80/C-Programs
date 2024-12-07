// Print this pattern .It was given in test and you were not able to do it at that time but then you did it here.
//     1
//    232
//   34543
//  4567654
// 567898765
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int x = i+1;
        for(int s=i;s<n-1;s++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            if(j<i){
                printf("%d",x++);
            }
            else{
                printf("%d",x--);
            }
        }
        printf("\n");
    }
//     int l,i;
//    for(i=0;i<5;i++){
//     l=i+1;
//     for(int j=i;j<4;j++){
//         printf(" ");
//     }
//     for(int k=0;k<i+1;k++){
//         printf("%d",l++);
//     }
//     l=2*i;
//     for(int m=1;m<i+1;m++){
//         printf("%d",l--);
//     }
//     printf("\n");
//    }
   return 0;

}