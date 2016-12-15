#include <stdio.h>
int main() 
{
	int arr[1000], i, n, j, k;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);

	for(i=0; i<n; i++)
	{
		if(arr[i]==arr[n-1-i])
		{
			if(n-i-1 > i)
				printf("arr[%d] = arr[%d]\n", i, n-1-i);
		}
	}

	return 0;
}