#include <stdio.h>

int main() {

	int n;
	printf("\nHow many days you are late: ");
	scanf("%d", &n);

	if(n <= 5)
		printf("\nYou will be charged 50 paise.\n");
	else if(n > 5 && n <= 10)
		printf("\nyou will be charged 1 rupee.\n");
	else if(n > 10 && n <= 30)
		printf("\nyou will be charged 5 rupees\n");
	else 
		printf("\nSorry, your membership will be cancelled\n");

	return 0;
}