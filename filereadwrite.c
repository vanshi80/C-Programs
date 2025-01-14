#include<stdio.h>
int main(){
	FILE *fp;
	int i;
	fp = fopen("sample.txt","r");
	if(fp==NULL){
		printf("file not found");
		return 1;
	}
//	fprintf(fp,"%d",2);
	fscanf(fp,"%d",&i);
	printf("%d",i);
	fclose(fp);
	return 0;
}
