#include <stdio.h>
#include <math.h>
int main() {
	double aid1, aid2, count;

	printf("\nEnter angles in degree: ");
	scanf("%lf %lf", &aid1, &aid2);

	count = pow(sin(aid), 2) + pow(cos(aid), 2);

	if(count == 1) 
		printf("\n Yes, Sin2@ + cos2@ = 1\n");
	else 
		printf("\n Yes, Sin2@ + cos2@ != 1\n");
}