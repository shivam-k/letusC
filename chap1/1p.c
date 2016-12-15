#include <stdio.h>
#include <math.h>
int main() {

	double l1, l2, D, g1, g2;
	printf("\nEnter latitude and longitude of place1: ");
	scanf("%lf %lf", &l1, &l2);
	printf("\nNow for place2: ");
	scanf("%lf %lf", &g1, &g2);

	D = 3963*acos( (sin(l1)*sin(l2)) + (cos(l1)*cos(l2)*cos(g1-g2)) );

	printf("\nDistance = %lf\n", D);
}