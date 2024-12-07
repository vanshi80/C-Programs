// we have to find the lcm of three numbers entered by the user through recursion.
// in order to find out the lcm of three numbers we have to first find out the gcd of the numbers and then divide it with the product of 
// the numbers.suppose we have three numbers n1,n2,n3 then we find out the lcm of frst two and then other two and then find out the lcm 
// of the resultant lcms'.
#include<stdio.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
       
}
int find_lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int i,j,k;
    printf("Enter the three numbers");
    scanf("%d %d %d",&i,&j,&k);
    int lcm1= find_lcm(i,j);
    int lcm2 = find_lcm(j,k);
    int lcm = find_lcm(lcm1,lcm2);
    printf("%d",lcm);
    return 0;
}