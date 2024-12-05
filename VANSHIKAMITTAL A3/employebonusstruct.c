#include<stdio.h>
struct Employees{
	char name[20];
	int id;
	long salary;
	int yos;
}emp[2];
int main(){
	int i;
	for(i=0;i<2;i++){
		printf("Enter the name ");
		scanf("%s",&emp[i].name);
		printf("Enter the id ");
		scanf("%d",&emp[i].id);
		printf("Enter the salary ");
		scanf("%ld",&emp[i].salary);
		printf("enter the year of service ");
		scanf("%d",&emp[i].yos);
	}
	for(i=0;i<2;i++){
		if(emp[i].yos >5){
			printf("The name : %s\n",emp[i].name);
			printf("The id: %d\n",emp[i].id);
			printf("The bonus: %.lf\n",0.1*(emp[i].salary));
		}
		
	}
	return 0;
}
