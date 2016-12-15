#include <stdio.h>
#include <math.h>
int main() {
	int i, j, k, max=0;
	for(i=1; i<=30; i++) {
		for(j=1; j<=30; j++) {
			for(k=1; k<=30; k++) {
				if(pow(i, 2) + pow(j, 2) == pow(k, 2)) {
					if(pow(k,2) > max){
						max = pow(k,2);    	
						printf("\nPythogorean Triplets: %d %d %d\n", i, j, k);
					}
				}
			}
		}
	}

	return 0;
}