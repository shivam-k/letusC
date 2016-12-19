#include <stdio.h>
void tmatrix(int *p, int, int);
int main() 
{
	int matrix[4][4], transpose_matrix[4][4], i, j, k, row=4, col=4;
	int *p;
	// input of array elements
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	p = matrix[0];
	// printing the matrix
	for(i=0; i<4; i++)
	{	
		for(j=0; j<4; j++)
		{
			printf("%d ", *(p+i*col+j));
		}
		printf("\n");
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			 transpose_matrix[j][i] = matrix[i][j];
		}
	}
	printf("\n");
	// printing the transpose matrix
	for(i=0; i<4; i++)
	{	
		for(j=0; j<4; j++)
		{
			printf("%d ", transpose_matrix[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}

