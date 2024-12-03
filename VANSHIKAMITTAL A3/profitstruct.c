//
//#include<stdio.h>
//struct Price{
//		float sp;
//		float cp;
//};
//struct Product{
//	int id;
//	char name[10];
//	struct Price p;	
//};
//int main(){
//	struct Product prod[5];
//	int i;
//	float profitper;
//	for(i=0;i<5;i++){
//		scanf("%d",&prod[i].id);
//		scanf("%s",prod[i].name);
//		scanf("%f",&prod[i].p.sp);
//		scanf("%f",&prod[i].p.cp);
//		
//	}
//	for(i=0;i<5;i++){
//		profitper = ((prod[i].p.sp - prod[i].p.cp)/(prod[i].p.cp))*100;
//		if(profitper>10){
//			printf("%d",prod[i].id);
//			printf("%s",prod[i].name);
//			printf("%f",prod[i].p.sp);
//			printf("%f",prod[i].p.cp);
//		}
//	}
//	
//	return 0;
//}
#include<stdio.h>

struct Price {
    float sp;  // Selling price
    float cp;  // Cost price
};

struct Product {
    int id;        // Product ID
    char name[10]; // Product name (still 10 characters; increase if needed)
    struct Price p;
};

int main() {
    struct Product prod[5];
    int i;
    float profitper;

    // Input product details
    for(i = 0; i < 5; i++) {
        scanf("%d", &prod[i].id);         // Input product ID
        scanf("%9s", prod[i].name);       // Input product name (limit to 9 characters to avoid overflow)
        scanf("%f", &prod[i].p.sp);       // Input selling price
        scanf("%f", &prod[i].p.cp);       // Input cost price
    }

    // Calculate and print products with profit percentage greater than 10%
    for(i = 0; i < 5; i++) {
        profitper = ((prod[i].p.sp - prod[i].p.cp) / prod[i].p.cp) * 100;

        // Only print products with profit percentage greater than 10%
        if(profitper > 10) {
            printf("%d ", prod[i].id);              // Print product ID
            printf("%s ", prod[i].name);            // Print product name
            printf("%.2f ", prod[i].p.sp);          // Print selling price with 2 decimals
            printf("%.2f\n", prod[i].p.cp);         // Print cost price with 2 decimals
        }
    }

    return 0;
}

