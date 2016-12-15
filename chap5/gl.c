#include <stdio.h>
#include <math.h>
void gcd(int, int);

int main(void) {
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	gcd(n1, n2);

	return 0;
}

void gcd(int x, int y) {
	int temp, count1, count2;
	do {
		temp = x/y;
		count1 = x;
		count2 = y;
		x = y;
		y = count1 - (temp*y);
	} while(y!=0);

	printf("GCD = %d\n", count2);
}