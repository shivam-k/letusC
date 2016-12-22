/*---- I can do it ----*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str[] = {
		"We will teach you how to...",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million",
		"..all through C!"
	};
	char str1[20], str2[20];
	int i, n, j, k;
	scanf("%s %s", str1, str2);
	for(i=0; i<6; i++)
	{
		printf("%s\n", str[i]);
		j = strcmp(str1[i], str1);
		if(j==0)
		{
			k=0;
			while(str[i][k]!='\0')
			{
				l = 0;
				while(str1[l]='\0')
				{
					if(str[i][k]==str1[l])
				}
			}
		}
		// while(str[i][j]!='\0')
		// {
		// 	printf("%c ", str[i][j]);
		// 	j++;
		// }
		// printf("\n");
	}
	return 0;
}