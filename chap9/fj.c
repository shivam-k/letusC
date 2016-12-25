/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	int i, j, k, len, count=0;
	char str[100], vow[]="aeiou";
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("len = %d\n%s\n", len, str);
 	for(i=0; i<len; i++)
 	{
 		for(j=0; j<5; j++)
 		{
 			if(str[i]==vow[j])
 			{
 				for(k=0; k<5; k++)
 				{
 					if(str[i+1]==vow[k])
 					{
 						printf("%c%c\n", vow[j], vow[k]);
 						count++;
 					}
 				}
 			}
 		}
 	}
 	if(count==0)
 		printf("No such occurrences\n");

	return 0;
}