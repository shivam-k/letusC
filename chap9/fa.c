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
	scanf("%s %s", str1, str2);
	int i, n, j, k=0, m=0, len1=strlen(str1), len2=strlen(str2), pass=0, row[10], col[10], r=0, c=0, tar;
	for(i=0; i<6; i++)
	{
		printf("%s\n", str[i]);
	}

	for(i=0; i<6; i++)
	{
		j=0;
		while(str[i][j]!='\0')
		{
			if(str[i][j]==str1[0])
			{
				k=0;
				m=j;
				while(str1[k]!='\0' || str[i][m]!='\0' || str[i][m]!=' ')
				{
					if(str[i][m]==str1[k])
					{
						if(k==len1-1)
						{
							row[r]=i;
							col[c]=j;
							r++; c++;
						}
						k++;
						m++;
					}
					else 
						break;
				}
			}
			j++;
		}
	}
	j=0;
	for(i=0; i<r; i++)
	{
		tar = col[i]+len1;
		for(j=col[i]; j<tar;j++)
		{
			printf("%c", str[row[i]][j]);
		}
		tar = col[i]+len2;
		m = 0;
		for(j=col[i]; j<tar; j++)
		{
			str[row[i]][j] = str2[m];
			m++; 	
			if(j==tar-1)
			{
				j++;
				str[row[i]][j] = '\0';
			}
		}
		
		printf("\n");
	}
	for(i=0; i<6; i++)
	{
		printf("%s\n", str[i]);
	}


	printf("\n");
	return 0;
}