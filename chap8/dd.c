#include <stdio.h>
int main() 
{
	int i, n, arr[25], count1=0, count2=0, count3=0, count4=0, state;
	for(i=0; i<=24; i++) 
	{
		scanf("%d", &arr[i]);
	}

	//finding -ve and +ve numbers in array
	for(i=0; i<=24; i++)
	{
		if(arr[i]>0)
			count1++;
		else
			count2++;
		if(arr[i]%2==0)
			count3++;
		else
			count4++;
	}

	printf("\n%d +ve and %d -ve numbers", count1, count2);
	printf("\n%d even and %d odd\n", count3, count4);

	return 0;
}