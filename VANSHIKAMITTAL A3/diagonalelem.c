#include<stdio.h>
#include<stdlib.h>

int main(){
    int r, c,i,j;
    
    // Take inputs for rows and columns
    scanf("%d", &r);
    scanf("%d", &c);
    
    // Check if it's a square matrix (rows == columns)
    if (r == c) {
            int **array = (int**)malloc(r * sizeof(int*));
    		for (i = 0; i < r; i++) {
        		array[i] = (int*)malloc(c * sizeof(int));
    		}

	    // Asking the user to input the elements
	    printf("Enter elements of the 2D array:\n");
	    for (i = 0; i < r; i++) {
	        for (j = 0; j < c; j++) {
	            printf("Enter element for position [%d][%d]: ", i, j);
	            scanf("%d", &array[i][j]);
	        }
	    }
		printf("the array elememts are:");
        // Print the array as a matrix
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
//        printing the left diagonal element
         for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
            	if(i==j && (i+j)<(c-1){
            		printf("%d ", array[i][j]);
				}
                
            }
            printf("\n");
        }
        
        // Free dynamically allocated memory
        free(array);
    }

    return 0;
}

