#include <stdio.h>
#include <math.h>

int main(void) {

	float wcf, t, v;
	printf("\nEnter temperature and velocity respectively: ");
	scanf("%f %f", &t, &v);

	wcf = 35.74 + (0.6215*t) + (0.4275*t - 35.75)*pow(v, 0.16);
	printf("\nwcf = %f\n", wcf);

	return 0;
}


