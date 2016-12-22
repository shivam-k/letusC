/*---- I can do it -----*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n, i, j, k;
	scanf("%d", &n);
	char fa[] = "a", fb[]="b", fn[20], temp[20];
	for(i=2; i<=n; i++)
	{
		strcpy(temp, fb); // copying fb in temp before concatenating fb and fa
		strcat(fb,fa);
		strcpy(fn,fb);
		if(i<n)
		{
			strcpy(fa, temp);  // exchanging 
			strcpy(fb, fn);
		}
		else
			break;
	}
	printf("\n%s\n", fn);
	printf("\n");
	return 0;
}
