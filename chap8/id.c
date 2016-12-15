#include <stdio.h>
void modify(int *, int);
int main()
{
	int num[1000], i, n;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &num[i]);
	modify(num, n);
	for(i=0; i<n; i++)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}

void modify(int *p, int n)
{
	int i, j;
	for(i=1; i<=n; i++)
	{
		*p = *p*3;
		p++;
	}
}