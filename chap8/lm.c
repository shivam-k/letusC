#include <stdio.h>
#include <math.h>
int main(void)
{
	int arr[100], i, j, n, k, sum=0;
	float avg, stdtn=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	for(i=0; i<n; i++)
	{
		sum = sum+arr[i];
	}
	avg = sum/(n);
	printf("avg = %f\n", avg);
	for(i=0; i<n; i++)
	{
		stdtn = stdtn + pow((arr[i]- avg), 2);
	}
	stdtn = stdtn/(n);
	printf("\n%f\n", sqrt(stdtn));

	return 0;
}