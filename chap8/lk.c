#include <stdio.h>
void fun(int arr[4][5], int, int);
int main () 
{
	int i, j, k, arr[4][5], row=4, col=5;
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			arr[i-1][j-1] = i*10+j;
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	fun(arr, 4, 5);
	printf("\n");

	return 0;
}

void fun(int arr[4][5], int row, int col)
{
	int i, j, k;
	printf("\n");
	for(i=0; i<row; i++)
	{
		for(j=2; j<col;)
		{
			if(j==col-1)
			{
				printf("%d ", arr[i][j]);
				for(k=0; k<2; k++)
				{
					printf("%d ", arr[i][k]);
				}
				break;
			}
			else {
				printf("%d ", arr[i][j]);
				j++;
			}
		}
		printf("\n");
	}

}