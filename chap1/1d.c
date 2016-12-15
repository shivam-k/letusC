#include <stdio.h>
int main(){

	float fahr, centi ;
	// temp input in fahrenheit
	scanf("%f", &fahr);
	centi = ((fahr-32)*5)/9;
	printf("\nTemperature (centigrade) = %f\n", centi);

	return 0; 
}