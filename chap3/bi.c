#include <stdio.h>
int main() {
	int n, max = 0, min = 0;
	printf("Enter 0 or negative to come out of loop: \n");
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n > 0) 
		min = n;
	else 
		min = 0;
	do {
		if(n>0) {
			if(n > max)
				max = n;
			else if(n < min)
				min = n;
		}
		else {
			break;
		} 
		printf("Enter 0 or negative to come out of loop: \n");
		printf("Enter a number: ");
		scanf("%d", &n);
	} while(1);
	printf("\nMax = %d", max);
	printf("\nMin = %d", min);
	printf("\nRange = %d\n", max-min);

	return 0;
}