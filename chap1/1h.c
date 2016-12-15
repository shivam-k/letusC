#include <stdio.h>
int main() {

	int n, rn = 0, count, temp, i, j;
	printf("\nEntr the number: ");
	scanf("%d", &n);

	for(i=1; i>0; i*=10) {
		count = n/i;
		if(count >= 1 && count <= 9) {
			temp = i;
		}
		else {
			continue; 
		}
	}                                                                                                                                                                                                                                                                                                                                                          

	// printf("\ntemp = %d\n", temp);

	for(i=temp; i>=1; i/=10) {
		count = n%10;
		n = n/10;
		rn = rn + count*i; 
	}
	printf("\nReverse Number = %d\n", rn);

	return 0;
}