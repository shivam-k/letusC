// Deviation of numbers == Get the average of numbers, and then substract the each number 
// from average and sqaure the each...And finally get the average of that
// 

#include <stdio.h>
#include <math.h>
int sum(int, int, int, int, int);  //declaration of sum() function
float avg(int, int, int, int, int); //declaration of avg() function
float deviation(int, int, int, int, int);  //declaration of deviation() function
int main() {

	int n1,n2, n3, n4, n5;

	printf("Enter 5 number: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

	printf("\nSum = %d", sum(n1, n2, n3, n4, n5));
	printf("\nAvearage = %f", avg(n1, n2, n3, n4, n5));
	printf("\nDeviation = %f\n", deviation(n1, n2, n3, n4, n5));
}

// defining sum() function
int sum(int n1, int n2, int n3, int n4, int n5) {
	int sum;
	sum = n1+n2+n3+n4+n5;
	return(sum);
}

// defining avg() function
float avg(int n1, int n2, int n3, int n4, int n5) {
	float average;
	average = (n1+n2+n3+n4+n5)/5;
	return(average);
}

//defining deviation() function
float deviation(int n1, int n2, int n3, int n4, int n5) {
	float devion, average;
	int i, num1,num2, num3, num4, num5;
	average = (n1+n2+n3+n4+n5)/5;
	num1 = pow((average-n1), 2);
	num2 = pow((average-n2), 2);
	num3 = pow((average-n3), 2);
	num4 = pow((average-n4), 2);
	num5 = pow((average-n5), 2);
	devion = sqrt((num1+num2+num3+num4+num5)/5);
	return(devion);
}