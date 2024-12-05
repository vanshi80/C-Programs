//Store management
#include<stdio.h>
struct Store{
	int productId;
	char name[20];
	float price;
	int quantity;
}store[3];
int main(){
    int i,p_id;
    char p_name[20],choice[3];
    for(i = 0; i < 3; i++){
        printf("Enter details for product %d:\n", i + 1);
        
        printf("Enter product ID: ");
        scanf("%d", &store[i].productId);
        
        printf("Enter product name: ");
        scanf("%s", store[i].name);  
        
        printf("Enter product price: ");
        scanf("%f", &store[i].price);
        
        printf("Enter product quantity: ");
        scanf("%d", &store[i].quantity);
        
        printf("\n"); 
    }
    
    printf("Do you want to search the product details: yes or no?");
    scanf("%s",choice);
    if(choice == "yes"){
    	printf("What do you want? 1.Search through Product Name or 2.Search through Product Id");
    if(1){
    	printf("Enter the name");
    	scanf("%s",p_name);
    	for(i =0;i<3;i++){
    		if(store[i].name == p_name){
    			printf("Product %d:\n", i + 1);
		        printf("ID: %d\n", store[i].productId);
		        printf("Name: %s\n", store[i].name);
		        printf("Price: %.2f\n", store[i].price);
		        printf("Quantity: %d\n\n", store[i].quantity);
			}
		}
	}
	else{
    	printf("Enter the product id");
    	scanf("%d",p_id);
    	for(i =0;i<3;i++){
    		if(store[i].productId == p_id){
    			printf("Product %d:\n", i + 1);
		        printf("ID: %d\n", store[i].productId);
		        printf("Name: %s\n", store[i].name);
		        printf("Price: %.2f\n", store[i].price);
		        printf("Quantity: %d\n\n", store[i].quantity);
			}
		}
	}
	}else{
		
	}
    
	return 0;
}
    
