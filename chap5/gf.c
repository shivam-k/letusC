#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void r_binary(int);
void nr_binary(int);

int main() {
	int n;
	scanf("%d", &n);
	printf("\nRecursive Binary: ");
	r_binary(n);
	printf("\nNon-Recursive Binary: ");
	nr_binary(n);
	printf("\n");
	return 0;
}

void r_binary(int x) {
	int temp, count;
		count = x%2;
		temp = x/2;
		if(x>1) {
			printf(" %d", count); 
			r_binary(x/2);
		}
		else {
			printf(" %d", x);
			exit(0);
		}
}

void nr_binary(int x) {
	int i, temp, count;
	while(1) {
		count = x%2;
		temp = x/2;
		if(temp!=1) {
			printf(" %d", count);
			x = temp;
			continue; 
		}
		else {
			printf(" %d", temp);
			exit(0);
		}

	}
}