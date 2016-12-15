#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main() {

	double x, y, r, theta;
	printf("\nEnter the cartesian co-ordinate of point: ");
	scanf("%lf%lf", &x, &y);
	printf("\nSo. Cartesian co-ordinate of point is (%lf %lf)", x, y);

	r = sqrt(pow(x,2)+pow(y,2));
	theta = (atan(y/x)*180)/PI;    // converting in degree from radian

	printf("\nPolar co-ordinate = (%lf, %lf)\n", r, theta);


	return 0;
}