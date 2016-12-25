/*---- I can do it ----*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str[] = {
		"We will teach you how to",
		"Move a mountain",
		"Level a building",
		"Erase the past",
		"Make a million",
		"..all through C!"
	};
	char str1[20], str2[20], temp[20][20], *cpy;
	int i, n, j, k=0, m=0, len1, len2;
	//scanf("%s %s",str1, str2);
	//printf("%d\n", 
	//len1 = strlen(str[0]);
	//printf("len1 = %d", len1);
	for(i=0; i<6; i++)
	{
		m = 0;
		for(j=0; str[i][j]!='\0'; j++)
		{
			if(str[i][j]==' ' || str[i][j]=='.')
			{
				temp[k][m] = '\0';
				k++;
				m=0;
			}
			else
			{
				temp[k][m] = str[i][j];
				m++;
			}
		}
		printf("m = %d\n", m);
		temp[k][m] = '\0';
		printf("\n*****\n");
		for(int n=0; n<k; n++)
		{
			printf("%s\n", temp[n]);
		}
		k++;
	}
	printf("\n");
	return 0;
}