/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
struct students
{
	int roll;
	char name[20];
	char dep[20];
	char cors[20];
	int yoj;
};
void pyear(struct students *, int);
int main(void)
{
	struct students s[450];
	int n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &s[i].roll);
		scanf("%s", s[i].name);
		scanf("%s", s[i].dep);
		scanf("%s", s[i].cors);
		scanf("%d", &s[i].yoj);
	}
	for(i=0; i<n; i++)
	{
		printf("%d\n", s[i].roll);
		printf("%s\n", s[i].name);
		printf("%s\n", s[i].dep);
		printf("%s\n", s[i].cors);
		printf("%d\n", s[i].yoj);	
	}
	pyear(&s[0], n);

	return 0;
}

void pyear(struct students *p, int n)
{
	int pyr, i;
	scanf("%d", &pyr);
	for(i=0; i<2; i++)
	{
		if(p[i]->yoj==pyr)
			printf("%s\n", p[i]->name);
	}
}