#include <stdio.h>
void selectionSort(int *, int);
void bubbleSort(int *, int);
void insertionSort(int *, int);
int arr[5];
int main() {
	int i, j, k, n=5, count, state, temp;
	for(i=0; i<=n-1; i++) {
		scanf("%d", &arr[i]);
	}

	//selectionSort(&arr[0], n);
	bubbleSort(&arr[0], n);

	return 0;
}

// void selectionSort(int *p, int n)
// {
// 	int i, j, temp;
// 	for(i=0; i<=n-1; i++)
// 	{
// 		for(j=i+1; j<=n-1; j++)
// 		{
// 			if(arr[j]<arr[i])
// 			{
// 				temp = arr[i];
// 				arr[i] = arr[j];
// 				arr[j] = temp;
// 			}
// 		}
// 	}
// 	printf("\nSelection Sort result : ");
// 	for(i=0; i<=n-1; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n\n");
// }

void bubbleSort(int *p, int n) 
{
	int i, j, temp;
	for(i=1; i<=n-1; i++) 
	{
		for(j=i; j<=n-1; j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp = arr[j+1];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		for(i=0; i<=n-1; i++)
		{
			printf("%d ", arr[i]);
		} printf("\n");
	}
	printf("\nBubble Sort result : ");
	for(i=0; i<=n-1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
}

// void insertionSort(int *p, int n)
// {
// 	//insertion sort
// 	for(i=0; i<=n-1; i++)
// 	{
// 		for(j=0; j<=i; j++)
// 		{
// 			if(arr[j]<arr[i])
// 			{
// 				temp = arr[j];
// 				arr[j] = arr[i];
// 				arr[i] = temp;
// 			}
// 			printf("\n");
// 			for(k=0; k<=n-1; k++)
// 			{
// 				printf("%d ", arr[k]);
// 			}
// 		}
// 	}
// 	printf("\nInsertion Sort result : ");
// 	for(i=0; i<=n-1; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n\n");

// }