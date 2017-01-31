#include<stdio.h>

int main(){
	int i, grades[3];
	float avg, sum;
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	sum=0;
	for(i=0; i<3; i++){
		sum+=grades[i];
	}
	avg=sum/3;
	printf("The grades ave: %.2f\n", avg);
	if(avg>=75){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
 }
