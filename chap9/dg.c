/*---- I can do it ----*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	long unsigned int n, j, i, a;
	int arr[20], sum1, sum2, temp, sum;
	while(1)
	{
		scanf("%lu", &n);
		j = pow(10, 15);
		i = n/j;  
		if(i>=1 && i<=9) // condition for fixing the input to 16 digits only 
			break;
	}
	a = n;
	for(i=0; i<16; i++)
	{
		arr[i] = n%10;
		n = n/10;
	
}	sum1 = 0;
	for(i=1; i<16; i=i+2)
	{
		temp = arr[i]*2;
		if(temp/10 >= 1 && temp/10 <= 9)
		{
			temp = temp - 9;
		} 
		sum1 = sum1 + temp; // sum of all doubled digits 
	}
	sum2 = 0;
	for(i=0; i<16; i=i+2)
	{
		sum2 = sum2 + arr[i];    //Sum of digits at odd position from right 
	}
	sum = sum1+sum2;
	printf("sum = %d\n", sum);
	if(sum%10==0)
		printf("Credit card number %lu is valid\n", a);
	else
		printf("Credit card number %lu is not valid\n", a);

	return 0;
}