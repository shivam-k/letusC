#include <stdio.h>
int main() {

	int s1,s2,s3,s4,s5, am;
	float per;
	// marks of 5 subjects till input correct the condition of not more than 100

	do {
		printf("Print the marks obtained in each subject respectively.\nMarks in any subject should not more than 100.\n");

		scanf("%i %i %i %i %i", &s1, &s2, &s3, &s4, &s5);
	} while(s1 > 100 || s2 > 100 || s3 > 100 || s4 > 100 || s5 > 100);

	am = s1 + s2 + s3 + s4 + s5;
	per  = (am*100)/500;

	printf("\nAggregate Marks = %i", am);
	printf("\nPercentage = %f \n", per);

	return 0;
}