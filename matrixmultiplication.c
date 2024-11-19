#include<stdio.h>
int main(){
	int i,j,k,m,n,o,p,a[5][5],b[5][5],c[5][5];
	printf("Enter the number of rows and columns in first matrix");
	scanf("%d %d",&m,&n);
	printf("Enter the number of rows and columns in second matrix");
	scanf("%d %d",&o,&p);
	printf("Enter the array elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the anothyer array");
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
        c[i][j] = 0;
    }
}

	if(n==o){
		for(i=0;i<m;i++){
			for(j=0;j<p;j++){
				for(k=0;k<n;k++){
					c[i][j]+=a[i][k]*b[k][j];
				}
			}

		}	
		for(i=0;i<m;i++){
			for(j=0;j<p;j++){
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}
	
	else{
		printf("Multiplication not possible");
	}
	
	
	return 0;
}
