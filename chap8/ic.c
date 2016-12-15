#include <stdio.h>
int main()
{
	int num[1000], n, i, j, min;
	int *p = &num[0];
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &(*p));
		p++;
	}
	p = num;
	while(p <= &num[n-1])
	{
		printf("%d ", *p);
		p++;
	}
	p = num;
	min = *p;
	while(p <= &num[n-1])
	{
		if(*p < min)
			min = *p;
		p++;
	}
	printf("\nMin = %d", min);

	printf("\n");
	return 0;
}