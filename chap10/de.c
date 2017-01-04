#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char code[20];
	char name[20];
	int year;
};

int main(void)
{
	struct employee data[20];
	int n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%s %s %d", data[i].code, data[i].name, &data[i].year);
	int cyear;
	scanf("%d", &cyear);
	for(i=0; i<n; i++)
	{
		if(cyear - data[i].year >=3)
			printf("%s\n", data[i].name);
	}

	return 0;
}