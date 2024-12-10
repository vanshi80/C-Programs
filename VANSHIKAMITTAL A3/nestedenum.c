#include<stdio.h>
enum suit{
	heart=1,diamond,spade,club
}s;
enum rank{
	Ace,two,three,four,five,six,seven,eight,nine,ten,king,queen,jack
}r;
int main(){
	
	switch(s){
		case 1: printf("heart");
		case 2: printf("diamond");
		case 3: printf("spade");
		case 4: printf("club");
				break;
	}
	return 0;
}
