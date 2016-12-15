#include <stdio.h>
#include <math.h>
int main() {

	int l1, l2, l3;
	float p, a;
	printf("\nEnter the length of three sides respectively: ");
	scanf("%d%d%d", &l1, &l2, &l3);
	p = (l1+l2+l3)/2;
	a = sqrt(p*(p-l1)*(p-l2)*(p-l3));

	printf("\nArea of triangle = %f\n", a);

	return 0;

}