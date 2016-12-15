#include <stdio.h>

int main() {

	int a, b, c;
	printf("\nenter 3 sides of triangle respectively: ");
	scanf("%d %d %d", &a, &b, &c);

	if(a == b == c) {
		printf("\ntriangle is equilateral.\n");
	}
	else {
		if( a==b || a==c || b==c)
			printf("\ntriangle is isosceles.\n");
		else
			printf("\ntriangle is scalence.\n");
	}

	return 0;
}