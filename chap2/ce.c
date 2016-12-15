#include <stdio.h>
int main() {

	int n,N, count, i, temp, rn=0;
	printf("\nenter the number: ");
	scanf("%d", &n);
	N=n;
	for(i=1; i>0; i*=10) {
		count = n/i;
		if(count >= 0 && count <= 9) {
			count = i;
			break;
		}
	}
		for(i=count; n>0; i/=10) {
			temp = n%10;
			n = n/10;
			rn = rn + temp*i;
		}
		printf("\nRN = %d\n", rn);
		if(N == rn)
			printf("%d = %d\n", N, rn);
		else
			printf("%d != %d\n", N, rn);

		return 0;
}