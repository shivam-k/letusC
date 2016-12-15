#include <stdio.h>

int main() {

	int x, temp;
	scanf("%d", &x);
	temp = x%2;
	if(temp == 0)
		printf("\nNumber %d is even\n", x);
	else 
		printf("\nNumber %d is odd\n", x);
	return 0;
}