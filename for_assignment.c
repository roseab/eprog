#include<stdio.h>

int main(){
	int a,n=0;
	for(a=232000000; a<233000000; a++){
		if(a%2 == 0 && a%3 == 0 && a%5 == 0 && a%7 == 0 && a%11 == 0 && a%13 == 0 && a%17 == 0 && a%19 == 0){
			n=n+a;
		}
	}
	printf("%d", n);
}
