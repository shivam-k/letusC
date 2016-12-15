#include <stdio.h>
int main() {

	int y, temp1, temp2, temp3;
	scanf("%d", &y);

	temp1 = y%4;
	temp2 = y%100;
	temp3 = y%400;
	if(temp1 == 0) {
		if(temp2 == 0) {
			if(temp3 == 0) {
				printf("\nYear %d is a leap year.\n", y);
			}
			else {
				printf("\nYear %d is not a leap year.\n", y);
			}
		}
		else {
			printf("\nYear %d is a leap year.\n", y);	
		}
	} 
	else {
		printf("\nYear %d is not a leap year.\n", y);
	}

	return 0;
}