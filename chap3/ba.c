#include <stdio.h>

int main() {

	int wh, i, ot, otp;
	printf("Enter the work-hour: ");
	scanf("%d", &wh);
	if(wh <= 40)
		printf("no overtime payment.\n");
	else {
		ot = wh - 40;
		otp = ot*10*12;
		printf("Overtime Payment = %d\n", otp);
	}

	return 0;
}