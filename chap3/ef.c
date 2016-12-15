#include <stdio.h>
int main() {

	int i, j, k, gap=5;
	char g = ' ';
	for(i=1; i<=10; i++) {
		if(i==1||i==2||i==4||i==7) {
			for(j=gap; j>=1; j--){
				printf("%2c", g); 	
			}
			gap--;
		}
		if(i==3||i==6||i==10) {
			printf("%4d", i);
			printf("\n");
		}
		else if(i==1) {
			printf("%2d", i);
			printf("\n");
		}
		else if(i==3 || i==5 || i==8 || i==9) {
			printf("%4d", i);
		}
		else {
			printf("%2d", i);
		}
		
	}
	printf("\n");
	return 0;
}