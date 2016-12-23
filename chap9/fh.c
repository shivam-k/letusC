/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char str[50], nstr[50];
	char *rm = "the";
	char *p;
	scanf("%[^\n]s", str);
	int i, j;
	int size = strlen(str);
	p = strtok (str," ,.-");
	while(p != NULL)
	{
		if(p != rm)
			printf("%s ", p);
    	p = strtok (NULL, " ,.-");
	}

	printf("\n");

	return 0;
}