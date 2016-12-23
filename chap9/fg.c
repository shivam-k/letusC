/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char *str, *r="*";
	char *vow = "aeiou";
	scanf("%s", str);
	int i, j, k;
	i = 0;
	while(vow[i]!='\0')
	{
		j = 0;
		while(str[j]!='\0')
		{
			if(str[j]==vow[i])
				str[j] = r[0];
			j++;
		}
		i++;
	}
	printf("%s\n", str);

	return 0;
}