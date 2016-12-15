#include <stdio.h>

int main() {
	int n = 0;
	char i;
	printf("ASCII values and their equivalent characters: \n");
	while (n <= 255) {
	    //i = n;
		printf("Character = %c & ASCII value = %d\n", n, n);
		n++;
	}

	return 0;
}