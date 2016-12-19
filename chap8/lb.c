//lb.c

#include <stdio.h>

int main() 
{
	int num[5][5], i, j, *p, count, max;
	p = num[0];
	for(i=0; i<5; i++)
	{
		scanf("%d %d %d %d %d", &num[i][0], &num[i][1], &num[i][2], &num[i][3], &num[i][4] );
	}

	for(i=0; i<5; i++)
	{
		printf(" %d %d %d %d %d ", num[i][0], num[i][1], num[i][2], num[i][3], num[i][4] );
	}
	max = num[0][0];
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(num[i][j]>max)
				max = num[i][j];
		}
	}
	printf("\n%d", max);

	printf("\n");
	return 0;
}
