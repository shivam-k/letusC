/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char str[50], nstr[50], s[20][20];
	char rm[] = "the";
	int cmp;
	scanf("%[^\n]s", str);
	printf("%s\n", str);
	int i = 0, j=0, k=0;
	int size = strlen(str);
	for(i=0; i<size; i++)
	{
		if(str[i]==' ')
		{
			s[j][k] = '\0';
			j++;
			k=0;
		}
		else
		{
			s[j][k] = str[i];
			k++;
		}
	}
	s[j][k] = '\0';
	printf("\n");
	for(i=0; i<=j; i++)
	{
		cmp = strcmp(s[i], rm);
		if(cmp!=0)
		{
			printf("%s ", s[i]);
		}
	}
 	printf("\n");
	return 0;
}