#include<stdio.h>

int main (){
	int i, j, num;
	printf("Input Value:");
	scanf("%d", &num);
	for(i=0; i<num; i++){
		for(j=num; j>i; j--){
			printf("*");
		}
			printf("\n");
	}
	system("Pause");
}
