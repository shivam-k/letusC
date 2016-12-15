#include <stdio.h>

int main()
{
	int i, arr[1000], temp, n;
	scanf("%d", &n);
	for(i=1; i<=n; i++) 
	{
		arr[i-1] = i;
	}
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	// swapping odd and even element 
	for(i=0; i<n; i++)
	{
		if(arr[i]%2!=0)
		{
			temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1] = temp;
			i++;
		}
	}

	printf("\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}