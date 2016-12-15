#include <stdio.h>
int main(void) {

	float dis, meter, feet, inch, cent;
	// input for distance between two cities in KM
	scanf("\n%f", &dis);
	printf("\nDistance (meter) = %f\n", dis*1000);
	printf("\nDistance (foot) = %f", dis*3280.84);
	printf("\nDistance (inches) = %f", dis*39370.1);
	printf("\nDistance (cent) = %f\n", dis*1000*100);

	return 0;
}