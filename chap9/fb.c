/*---- I can do it ----*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char *arr[20], str[10][10];
	char min[20], *temp;
	int n, i, j, n1, n2;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%s", str[i]);  // each name should start with big letter alphabet only
		arr[i] = str[i]; //copying all strings in array of pointers, so that assignment operator can be used
	}
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			n2 = *arr[j]; // taking ASCII value of first character of each string in n1, n2
			n1 = *arr[i];
			if(n2 < n1)
			{
				temp = arr[j];    // exchanging the string if ASCII value of first character of next string is less
								 // than ASCII of 1st character of string before next string...
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		printf("%s\n", arr[i]);
	}

	return 0;
}