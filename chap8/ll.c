#include <stdio.h>
int main() 
{
	int i, j, k, arr[6][6], row=4, col=5, det;
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
	det = 


	return 0;
}