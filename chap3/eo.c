#include <stdio.h>
#include <math.h>

int main() {
	int i, j, k;
	for(i<=1; i<2147 ; i++) {
		for(j=1; j<2147; j++){
			for(k=1; k<2147; k++){
				if(pow(i, 3) == pow(j, 3) + pow(k, 3))
					printf("\nRN: %d, %d, %d", i, j, k);
			}
		}
	}

	return 0;
}