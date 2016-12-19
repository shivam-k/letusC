#include <stdio.h>

int main()
{
	int mat1[10][10], mat2[10][10], add_mat[10][10], i, j, k, row, col;
	scanf("%d%d", &row, &col);

	for(i=1; i<=row; i++)
	{
		for(j=1; j<=col; j++)
		{
			mat1[i-1][j-1] = i*10 + j;
			mat2[i-1][j-1] = i*100 + j;
		}
	}
	for(i=0; i<4; i++)
	{	
		for(j=0; j<4; j++)
		{
			printf("%d ", mat1[i][j]);
			add_mat[i][j] = mat1[i][j] + mat2[i][j];    // adding matrix's elements
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<4; i++)
	{	
		for(j=0; j<4; j++)
		{
			printf("%d ", mat2[i][j]);
			//add_mat[i][j] = mat1[i][j] + mat2[i][j];    // adding matrix's elements
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("%d ", add_mat[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	return 0;
}