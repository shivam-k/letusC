#include <stdio.h>

int main() {
	int n, count, temp, i, j, k, test, sum, remainder;
	// scanf("%d", &n);

	for(i=1; i<=500; i++) {
		sum = 0;
		k = i;
		do {
			remainder = k%10;
			k = k/10;
			sum = sum + (remainder*remainder*remainder);
		} while(k>0);

		if(sum==i) 
			printf("%d\n", sum);
	}


	return 0;
}