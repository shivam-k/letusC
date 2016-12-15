#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void fibonacci(int, int, int); //initilization of function which fint first n Fibonacci Sequence

int main() {
	int n=25, count=2, x, y=x=1;
	printf(" %d", x);
	printf(" %d", y);
	fibonacci(x, y, count);

	return 0;
}

void fibonacci(int x, int y, int count) {
	int z, temp;
	if(count!=25) {
		z = x+y;
		printf(" %d", z);
		x = y;
		y = z;
		count++;
		fibonacci(x, y, count);
	}
	else {
		printf("\n");
		exit(0);
	}
}