#include <stdio.h>
int main() {

	int a, b, c;
	scanf("%i %i", &a, &b);
	printf("Initiallt, \na = %d\nb = %d", a, b);
	c = a;
	a = b;
	b = c;
	printf("\nFinal, \na = %d\nb = %d\n", a, b);
	return 0;

}