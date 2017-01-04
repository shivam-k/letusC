/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
int compare(const void void *, const void *);
struct cricketers
{
	int age, test, avg;
};
int main(void)
{
	struct cricketers list[20];
	int i;
	for(i=0; i<20; i++)
	{
		scanf("%d %d %d", &list[i].age, &list[i].test, &list[i].avg);
	}
	qsort(list, 20, sizeof(int), compare);
	for(i=0; i<20; i++)
	{
		printf("%d %d %d", list[i].age, list[i].test, list[i].avg);
	}

	return 0;
}
int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b );
}