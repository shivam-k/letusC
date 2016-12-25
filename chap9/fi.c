/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char name[100], nname[100], temp[20];
	// at least one gap is required between first and last name
	// input = James Brolin,output = J.Brolin
	int i, count=0, len, j, k=0, code=0, pass=0;
	while(1)
	{
		fgets(name, sizeof(name), stdin);
		len = strlen(name);
		printf("len = %d\n", len);
		for(i=0; i<len; i++)
		{
			if(name[i]==' ')
			{
				//printf("i = %d\n", i);
				count++;
			}
		}
		if(count>0)
			break;
		else
		{
			printf("Atleast One gap is required in your name: \n");
			count=0;
			continue;
		}
	}
	printf("%s\n", name);
	printf("count = %d\n", count);
	j=0;
	for(i=0; i<len; i++)
	{
		if(name[i]==' ')
			code++;
		if(code<=count && pass==0)
		{
			if(name[i]==' ')
			{
				k++;
				nname[k] = temp[0];
				printf("%c", nname[k]);
				k++;
				nname[k] = '.';
				printf("%c", nname[k]);
				j = 0;
				if(code==count)
					pass=1;
			}
			else
			{
				if(name[i]!=' ')
				{
					temp[j] = name[i];
					j++;
				}
			}
		}
		else if(code==count && pass==1)
		{
			k++;
			nname[k] = name[i];
			printf("%c", nname[k]);
		}
	}
	//nname[k+1] = '\0';
	printf("\n");
	printf("%s\n", nname);

	return 0;
}