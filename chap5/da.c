#include <stdio.h>
int factorial(int x);

int main() {
	int n, fact;
	scanf("%d", &n);
	printf("factorial of %d = %d\n", n, factorial(n));

	return 0;
}

int factorial(int x) {
	int i, fact=1;
	for(i=1; i<=x; i++) {
		fact = fact*i;
	}
	return(fact);
}