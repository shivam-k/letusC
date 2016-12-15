#include <stdio.h>
int main() 
{
	int num[100], i, j=0,k, count, temp;
	for(i=0; i<100; i++)
	{
		j++;
		num[i] = j;
	}

	// for(i=0; i<100; i++)
	// 	printf("%d ", num[i]);

	for(i=0; i<100; i++)
	{
		for(j=2; j<i; j++)
		{
			if(num[j]==0)
				continue;
			else
			{
				temp = num[i] % num[j];
				if(temp==0) {
					num[j]=0;
					num[i]=0;
				}
			}
			//printf("\nnum[i] = %d, num[j] = %d, temp = %f", num[i],num[j],temp);
			printf("\n");
			for(k=0; k<100; k++)
				printf("%d ", num[k]);

		}
	}
	printf("\n\n");
	for(i=0; i<100; i++)
	{
		if(num[i]!=0)
			printf("%d ", num[i]);
	}
	printf("\n");

	return 0;
}