#include <stdio.h>
#include <math.h>
int main() {
	float a, b, r, q, n, p;
	printf("\nEnter the value of p: ");
	scanf("%f", &p);
	printf("\nEnter the value of r(percent): ");
	scanf("%f", &r);
	printf("\nEnter the value of n(times in year): ");
	scanf("%f", &n);
	printf("\nEnter the value of q(compound interest): ");
	scanf("%f", &q);

	a = p*pow((1+(r/q)), n*q);

	printf("\na = %f\n", a);

	return 0;
}