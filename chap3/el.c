#include <stdio.h>
#include <math.h>
int main() {
	float x, val, i;
	scanf("%f", &x);
	val = (x-1)/x;
	for(i=2; i<=7; i++) {
       val = val + (1/2)*pow(val, i);
	} 

	printf("\nval = %f\n", val);

	return 0;
}