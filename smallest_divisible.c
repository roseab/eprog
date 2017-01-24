#include<stdio.h>

int main (){
	int i;
	int sum;
	for(i=0; i<=23456789; i++){
		if(i%2==0){
			sum+=i;
		}
	}
	printf("%d", sum);
}
