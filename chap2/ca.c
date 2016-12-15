#include <stdio.h>
int main() {

	float cp, sp, prof;
	scanf("%f%f", &cp, &sp);

	if(sp > cp)
		printf("\nCongrats!, you have made profit of %f\n", sp-cp);
	else if(sp == cp)
		printf("\nYou are in equilibrium\n");
	else 
		printf("\nSorry, you have got loss of %f\n", cp-sp);

	return 0;
}