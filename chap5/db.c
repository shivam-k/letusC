#include <stdio.h>
#include <math.h>
int power(int a,int b );
int main() {
	int n1, n2;
	scanf("%d%d", &n1, &n2);
	printf("Val = %d\n", power(n1, n2));

	return 0;
}

int power(int a, int b) {
	int power;
	power = pow(a, b);
	return(power);
}