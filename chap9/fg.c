/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char *str;
	char *vow = "aeiou";
	scanf("%s", str);
	int i, j, k;
	i = 0;
	while(str[i]!='\0')
	{
		j = 0;
		while(vow[j]!='\0')
		{
			if(str[i]==vow[j])
				*str[i] = "k";
			j++;
		}
		i++;
	}
	printf("%s\n", str);

	return 0;
}