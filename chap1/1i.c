#include <stdio.h>
int main() {

	int n, sum, temp, count, i=0, n1, n2;

	printf("\nEnter the number: ");
	scanf("%d", &n);

	do {
		count = n%10;
		n = n/10;
		i++;
		if(i==1) 
			n1 = count;
		if(n==0)
			n2 = count;
	} while(n!=0);

	if(n1 != n2)
		printf("\nSum of 1st and last digit = %d\n", n1+n2);
	else
		printf("\nSum of 1st and last digit = %d\n", n1);
	

	return 0;
}