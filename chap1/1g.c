/* ************
               For Summing up 5 digits only
                                             ************** */
// #include <stdio.h>
// int main() {

// 	int x, pass, sum = 0, a, b, i;
// 	do {

// 		printf("\nEnter five-digit number: ");
// 		scanf("%d", &x);

// 		if((x/10000) >= 1 && (x/10000) <= 9) // finding the dogits in input number by dividing by 10000 
// 			pass = 0;
// 		else 
// 			pass = 1;

// 	} while (pass);  // pass=1 : means condition is true and loop will continue

// 	printf("\nYour number = %d\n", x);

// 	for(i=10000; i >= 10 ; i = i/10) {
// 		printf("\nWhen i = %d and x = %d", i, x);
// 		a = x / i;    //storing number after dividing the original number to get sum
// 		x = x % i;     // storing new number to replace old one
// 		sum = sum + a;
// 		printf("\nSum = %d and a = %d", sum, a);
// 	}

//  	printf("\nSum of digits = %d\n", sum + (x%10));

// 	return 0;
// }


/* ************
			   for Summing any numbers of digits only
                                                       ************** */
	#include <stdlib.h>
	#include <stdio.h>
	#include <math.h>
	int main() {
		int n, i, count, sum=0;
		printf("\nenter your number: ");
		scanf("%d", &n);

		do {
			count = n%10;
			n = n/10;
			sum = sum + count;
		} while(n != 0);

		printf("\n Sum of digits = %d\n", sum);

		return 0;
	}