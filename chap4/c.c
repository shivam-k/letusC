#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n, i, fact, num, temp, count;
	float hack;
	while(1) {
		printf("\n1) Factorial of a number");
		printf("\n2) Prime or not");
		printf("\n3) Odd or even");
		printf("\n4) Exit");
		printf("\n\nSelect your choice: ");
		scanf("%d", &n);
		if(n>=1 && n<=4) {
			switch(n) {
				case 1:
					printf("Enter the number: ");
					scanf("%d", &num);
					fact = 1;
					for(i=1; i<=num; i++) {
						fact = fact * i;
					}
					printf("Factorial of %d = %d\n", num, fact);
					break;
				case 2:
					printf("Enter the number: ");
					scanf("%d", &num);
					if(num==2) {
						printf("Prime\n");
					}
					else if(num==1) {
						printf("Not Prime number by defination.\n");
					}
					else {
						temp=0;
						for(i=2; i<num; i++) {
							count = num%i;
							if(count==0) {
								temp++;
								break;
							}
							else {
								continue;
							}
						}
						if(temp==0)
							printf("Prime\n");
						else 
							printf("Not Prime\n");
					}
					break;
				case 3:
					printf("Enter the number: ");
					scanf("%d", &num);
					hack = num%2;
					if(hack==0)
						printf("Even\n");
					else
						printf("Odd\n");
					break;
				case 4:
					printf("Okay..4");
					exit(0);
			}
		}
		else {
			printf("\nSelect choice only between 1-4");
			continue;
		}
	}

	return 0;
}