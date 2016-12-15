#include <stdio.h>
int main() {

	int ar, as, aa;

	printf("\nenter the age of Ram, Shyam and Ajay respectively: ");
	scanf("%d %d %d", &ar, &as, &aa);

	if(ar < as && ar < aa)
		printf("\nRam is youngest among all.\n");
	if(as < ar && as < aa)
		printf("\nShyam is youngest among all.\n");
	if(aa < ar && aa < as)
		printf("\nAjay is youngest among all.\n");

	return 0;

}