#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Player 1 MMR:");
	scanf("%d", &a);
	printf("Player 2 MMR:");
	scanf("%d", &b);
	c = a - b;
	printf("%d - %d = %d\n", a, b, c);
}
