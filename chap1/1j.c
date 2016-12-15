#include <stdio.h>
int main() {
	int Rs, Re1, Re2, Re5, Re10, Re50, Re100, count, i;
	printf("\nEnter the sum of Rs: ");
	scanf("%d", &Rs);

		Re100 = Rs/100;
		Rs = Rs - (100*Re100);
		printf("\nRe100 = %d %d", Re100, Rs);
		
		Re50 = Rs/50;
		Rs = Rs - (50*Re50);
		printf("\nRe50 = %d %d", Re50, Rs);
		
		Re10 = Rs/10;
		Rs = Rs - (10*Re10);
		printf("\nRe10 = %d %d", Re10, Rs);
		
		Re5 = Rs/5;
		Rs = Rs - (5*Re5);
		printf("\nRe5 = %d %d", Re5, Rs);
		
		Re2 = Rs/2;
		Rs = Rs - (2*Re2);
		printf("\nRe2 = %d %d", Re2, Rs);
		
		Re1 = Rs; 
		printf("\nRe1 = %d %d\n", Re1, Rs);

	//printf("Here are you are rupees: \nRe100 = %d\nRe50 = %d\nRe10 = %d\nRe5 = %d\nRe2 = %d\nRe1 = %d\n", Re100,Re50,Re10,Re5,Re2,Re1);

	return 0;
}