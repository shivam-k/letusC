/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
	//pointer to an array of 4 ints 
	int (*ptr)[4] = {25,56,89,41}; // ==int *ptr  

	//arr of 10 int* pointers
	//int *p[4] = {125, 545, 584, 545}; 

	printf("%d\n", (*ptr)[2]);

	return 0;
}

