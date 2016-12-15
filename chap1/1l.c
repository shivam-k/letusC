#include <stdio.h>
int main() {

	int n, nn = 0, i, count, temp;

	printf("\nEnter the number: ");
	scanf("%d", &n);

	for(i=1; i>0; i*=10) {
		count = n/i;
		if(0 <= count && count <= 9) {
			count = i;
			break;
		}
		else {
			continue;
		}
	}

	for(i=1; i<=count; i*=10) {
		temp = n%10;
		n = n/10;
		nn = nn + (temp+1)*i;
	} 

	printf("\nNew number = %d\n", nn);

	return 0;

}