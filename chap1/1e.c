#include <stdio.h>
int main() {

	float len, bre, rad, area_rec, peri_rec, area_cir, circum_cir;
	printf("Print length and breath of rectangle repectively: ");
	scanf("%f %f", &len, &bre);
	printf("\nPrint radius of circle: ");
	scanf("%f", &rad);

	printf("\nArea of rectangle = %f", len*bre);
	printf("\nPerimeter of rectangle = %f", (len+bre)*2);

	printf("\nArea of circle = %f", 3.14*rad*rad);
	printf("\nCircumference of the circle = %f\n", 2*3.14*rad);
	return 0;

}