#include <stdio.h>
int main()
{
	int *p, a=5;
	int n[3][3] = {
		2,4,3,
		6,8,5,
		3,5,1
	};

	int i, j;
	for(i=0; i<=2; i++)
		for(j=0; j<=2; j++)
			printf("%d %d\n", n[i][j], *(*(n+i)+j));



	//p = &n;
	//printf("p = %p\n",p);
	// int i, *ptr;
	// ptr = n[0];
	// for(i=0; i<=8; i++)
	// 	printf("%d\n", *(ptr+i));
	//printf("%p %p %d %d\n", *n, n[0], n[3][3], n[2][2]);

	return 0;
}