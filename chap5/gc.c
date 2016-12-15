#include <stdio.h>
#include <math.h>
int nrsum(int);
int rsum(int);

int main() {
	int n;
	printf("Enter 5-digit positive integer: ");
	scanf("%d", &n);
	printf("\nNon-Recursive Sum = %d", nrsum(n));
	printf("\nRecursive Sum = %d\n", rsum(n));

	return 0;
}

//defining Non-Recursive Sum function
int nrsum(int x) {
	int i, nrsumv=0, temp;
	do {
		temp = x%10;
		x = x/10;
		nrsumv = nrsumv + temp;
	} while(x!=0);

	return(nrsumv);
}

//defining Recursive Sum function
int rsum(int x) {
	int rsumv;
	if(x == 0) {
		return(x%10);
	}
	else {
		rsumv = x%10 + rsum(x/10);
	}
	return(rsumv);
}