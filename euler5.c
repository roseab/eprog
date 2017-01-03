#include<stdio.h>

int main(){
	int a=232000000;
	int num=0;
	
	while(a<233000000){
		a++;
		if(a%2 == 0 && a%3 == 0 && a%5 == 0 && a%7 == 0 && a%11 == 0 && a%13 == 0 && a%17 == 0 && a%19 == 0){
			num=num+a;
		}
	}
	printf("%d",num);
}
