#include <stdio.h>
int main() {

	int n;
	scanf("%d", &n);
	// if(n >= 0)
	// 	printf("\nAbsolute value = %d\n", n);
	// else
	// 	printf("\nAbsolute value = %d\n", -n);

	printf("\nAbsolute value = %d", abs(n));

	return 0;
}