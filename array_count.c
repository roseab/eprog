#include<stdio.h>

int main(){
	int i, num[5], numzeroes=0;
	for(i=0; i<5; i++){
		printf("Num %d: ", i+1);
		scanf("%d", &num[i]);
	}
	for(i=0; i<5; i++){
		if(num[i]==0){
			numzeroes++;
		}
	}	
	printf("Zeroes: %d\n", numzeroes);
	printf("Ones: %d", 5-numzeroes);	
}
