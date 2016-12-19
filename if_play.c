#include<stdio.h>
int main(){
	int num;
	
	printf("Enter Num:");
	scanf("%d", &num);
	if(num%3 == 0){
		printf("Ed");
	}
	if(num%5 == 0){
		printf("Pogi");
	}	
	if(num%3,5 == 0){
		printf("Ed Pogi");
	}
}
