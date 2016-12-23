/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char str[40], nstr[40];
	scanf("%s", str);
	int i, j, k, size;
	size = strlen(str);
	printf("%d\n", size);
	for(j=0;j<size;j++)
	{
		if(str[j]!='a' && str[j]!='e' && str[j]!='i' && str[j]!='o' && str[j]!='u')
		{
			nstr[j] = str[j];
			printf("%c", nstr[j]);
		}
	}
	printf("\n");

	return 0;
}