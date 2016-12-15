#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	float x, y, r, x1, y1, d;
	printf("\nEnter the x and y coordinate of circle: ");
	scanf("%f %f", &x, &y);
	
	printf("\nEnter the radius of circle: ");
	scanf("%f", &r);

	printf("\nEnter the x and y co-ordinate of any anonymous point: ");
	scanf("%f %f", &x1, &y1);

	d = sqrt(pow((x1-x), 2) + pow((y1-y), 2));
	if(d == r) 
		printf("\nPoint (%f, %f) is on the circle\n", x1, y1);
	else if(d < r)
		printf("\nPoint (%f, %f) is inside the circle\n", x1, y1);
	else
		printf("\nPoint (%f, %f) is outside the circle\n", x1, y1);

	return 0;
}