/*---- I can do it----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char name[240], nname[240];
	// at least one gap is required between first and last name
	// input = James Brolin,output = J.Brolin
	int i, count=0, len, j, k, pass=0;
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
		printf("pass = %d\n", pass);
		nname[0] = name[0];
		//printf("%c", nname[0]);
		if(count==1)
		{
			if(pass=1)
			{
				j++;
				nname[j] = name[i];
			}
			if(name[i]==' ')
			{
				j++;
				nname[j] = '.';
				pass=1;
			}
		}
		// else
		// {
		// 	if(j<=count)
		// 	{
		// 		if(name[i]==' ')
		// 		{
		// 			j++;
		// 			nname[j] = '.';
		// 			printf("%c", nname[j]);
		// 			j++;
		// 			nname[j] = name[i+1];
		// 			printf("%c", nname[j]);
		// 		}
		// 	}
		// 	else if(count+1==j)
		// 	{
		// 		j++;
		// 		nname[j] = '.';
		// 		printf("%c", nname[j]);
		// 	}
		// 	else
		// 	{
		// 		j++;
		// 		nname[j] = name[i];
		// 		printf("%c", nname[j]);
		// 	}
		// }
	}
	//nname[j+1] = '\0';
	printf("\n");
	printf("%s", nname);

	return 0;
}