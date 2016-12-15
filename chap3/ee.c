#include <stdio.h>
int main() {

	char n, i, j, k, temp=70, count=1, g=71;
	for(n=1; n<=7; n++) {
		if(n>1)
			temp= 7-n;
		for(i=65; i<=temp; i++){ //for ABCDEFG
			printf("%c ", i);
		}

		if(n==1) { // for printing G in Mid
			printf("%c ", g);
		}
	
		if(n>1) { //for printing gap
			for(k=1; k<=count; k++){
				printf("  ");
			}
			count = count + 2 ;
		}

		for(j=temp; j>=65; j--) { //for FEDCBA
			printf("%c ", j);
		}
		printf("\n");
	}


	// int i, n;
	// for(i=1; i<=100; i++) {
	// 	for(n=1; n<=i; n++)
	// 		printf(" ");
	// 	printf("A\n");
	// }

	return 0;
}