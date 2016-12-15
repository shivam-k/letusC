#include <stdio.h>
int main() {
	float i, j, count, temp, sum = 0, fact;
	for(i=1; i<=7; i++) {
		fact=1;
		for(j=1; j<=i; j++) {
			fact = fact*j;
		}
		printf("fact = %f\n", fact);
		sum = sum + i/fact;
	}
	printf("Sum = %f\n", sum);

	return 0;
}