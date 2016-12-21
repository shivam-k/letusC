/*--- I can do it ----*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[] = "Working with strings is fun";
	int n, i;
	scanf("%d", &n);   // input for no characters to be extracted
	i = strlen(s);
	printf("len = %d\n", i);
	if(n > 0)
		printf("%s\n", &s[n-1]);
	else
	{
		printf("%s\n", &s[n]);
	}

	return 0;
}