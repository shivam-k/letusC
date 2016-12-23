/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


/* In Linux, strrve() function is not in string.h */
int main(void)
{
	char *s[] = {
		"To err is human...",
		"But to really mess things up...",
		"One needs to know C!!"
	};
	char str[100];
 	gets(str);
 	puts(strrev(str));
	int i, count, j, k;
	for(i=0; i<3; i++)
	{
		j = 0;
		while(s[i][j]!='\0')
		{
			j++;
		}
		count = j;
		for(k=count; k>=0; k--)
		{
			printf("%c", s[i][k]);
		}
		printf("\n");
	}

	return 0;
}