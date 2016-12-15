#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

	int x1, x2, x3, y1, y2, y3;
	float s1, s2;
	printf("\n Enter the x and y coordinate of 1st point: ");
	scanf("%d %d", &x1, &y1);

	printf("\n Enter the x and y coordinate of 2nd point: ");
	scanf("%d %d", &x2, &y2);

	printf("\n Enter the x and y coordinate of 3rd point: ");
	scanf("%d %d", &x3, &y3);

	s1 = abs(y1-y2)/abs(x1-x2);
	s2 = abs(y1-y3)/abs(x1-x3);

	if(s1 == s2) 
		printf("\nAl three points are colinear.\n");
	else
		printf("\nAl three points are not co-linear.\n");

	return 0;
}