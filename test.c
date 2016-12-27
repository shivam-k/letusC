#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// void swap(int **, int **);
// int main(void)
// {
// 	//int *p, *q, *temp;
// 	int i, j, min, t;
// 	int n1 = 5, n2 = 10;
// 	int *p1 = &n1, *p2 = &n2;
// 	int **q1 = &p1, **q2 = &p2;
// 	printf("n1 = %d, n2 = %d\n", n1, n2);
// 	printf("&n1 = %p, &n2 = %p\n", &n1, &n2);
// 	printf("p1 = %p, p2 = %p\n", p1, p2);
// 	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
// 	printf("&p1 = %p, &p2 = %p\n", &p1, &p2);
// 	printf("q1 = %p, q2 = %p\n", q1, q2);
// 	printf("*q1 = %p, *q2 = %p\n", *q1, *q2);
// 	printf("**q1 = %d, **q2 = %d\n", **q1, **q2);
// 	swap(q1, q2);
// 	printf("***********");
// 	printf("n1 = %d, n2 = %d\n", n1, n2);
// 	printf("&n1 = %p, &n2 = %p\n", &n1, &n2);
// 	printf("p1 = %p, p2 = %p\n", p1, p2);
// 	printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
// 	printf("&p1 = %p, &p2 = %p\n", &p1, &p2);
// 	printf("q1 = %p, q2 = %p\n", q1, q2);
// 	printf("*q1 = %p, *q2 = %p\n", *q1, *q2);
// 	printf("**q1 = %d, **q2 = %d\n", **q1, **q2);
// 	// scanf("%d", &t);
// 	// for(i=0; i<t; i++)
// 	// {
// 	// 	scanf("%d", &*p);
// 	// 	if(i==0)
// 	// 		q=p;
// 	// 	p++;
// 	// }
// 	// min = p[0];
// 	// // for(i=0; i<t; i++)
// 	// // {
// 	// // 	min = p[0];
// 	// // 	for(j=i+1; j<t; j++)
// 	// // 	{
// 	// // 		if(p[j]<min)
// 	// // 		{
// 	// // 			temp[0] = p[j];
// 	// // 			p[j] = p[i];
// 	// // 			p[i] = temp[0];
// 	// // 		}

// 	// // 	}
// 	// // }
// 	// for(i=0; i<t; i++)
// 	// {
// 	// 	printf("%d\n", *q);
// 	// 	q++;
// 	// }

// 	return 0;
// }
// void swap(int ∗∗a , int ∗∗b ) {
// 	int ∗temp = ∗a ;
// 	∗a = ∗b ;
// 	∗b = temp ;
// }

int main()

{

int arr[] = {10, 20, 30, 40, 50, 60};
int *p=arr;
*p++;
printf("%d\n",*p);
++(*p);
printf("%d\n",*p);
}