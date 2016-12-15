#include <stdio.h>
int main() {
	int i, j, k, temp, count;

		for(j=1; j<=3; j++){
			for(k=1; k<=3; k++){
				printf("%d\n", k);
				//printf("%d\n", (j*10)+k);
				//printf("%d\n", (k*100)+(j*10)+k);
			}
		}

	// for(i=1; i<=3; i++) {
	// 	for(j=1; j<=3; j++){
	// 		for(k=1; k<=3; k++){
	// 			//printf("%d\n", k);
	// 			printf("%d\n", (j*10)+k);
	// 			//printf("%d\n", (k*100)+(j*10)+k);
	// 		}
	// 	}
	// }

	// for(i=1; i<=3; i++) {
	// 	for(j=1; j<=3; j++){
	// 		for(k=1; k<=3; k++){
	// 			//printf("%d\n", k);
	// 			//printf("%d\n", (j*10)+k);
	// 			printf("%d\n", (k*100)+(j*10)+k);
	// 		}
	// 	}
	// }


	return 0;
}