#include <stdio.h>

int main() {
	int n, fact=1, i;
	scanf("%d", &n);
	for(i=n; i>=1; i--) {
		fact = fact*i;
	}
	printf("factorial = %d\n", fact);

	return 0;
}