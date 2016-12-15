#include <stdio.h>
int main() {
	int num[10], rnum[10], i, j=0;
	for(i=0; i<10; i++)
	{
		j++;
		num[i] = j;
	}
	j = 0;
	for(i=9; i>=0; i--)
	{	
		j++;
		rnum[i] = j; 
	}
	for(i=0; i<10; i++)
		printf("%d ", num[i]);
	printf("\n");
	for(i=0; i<10; i++)
		printf("%d ", rnum[i]);
	printf("\n");

	return 0;
}