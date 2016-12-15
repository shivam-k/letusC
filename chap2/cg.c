#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if(a+b+c == 180)
		printf("\nTriangle is valid.\n");
	else 
		printf("\nTriangle is not valid.\n");

	return 0;
}