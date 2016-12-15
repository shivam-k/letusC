#include <stdio.h>

int main() {

	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a > b && a > c)
		printf("\nA is greatest.\n");
	else if(b > a && b > c) 
		printf("\nB is gratest\n");
	else
		printf("\nC is gratest\n");

	return 0;
}