/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
//Structure declaration
struct students
{
	int roll;
	char name[20];
	char dep[20];
	char cors[20];
	int yoj;
};
// declaration of function which print names of all students who joined in a particular year
void pyear(struct students *, int);
// declaration of function which print data of students
void details(struct students *, int);
// main function
int main(void)
{
	struct students s[450];
	int n, i;
	scanf("%d", &n);// number of students
	for(i=0; i<n; i++)
	{
		scanf("%d", &s[i].roll);
		scanf("%s", s[i].name);
		scanf("%s", s[i].dep);
		scanf("%s", s[i].cors);
		scanf("%d", &s[i].yoj);
	}
	// for(i=0; i<n; i++)
	// {
	// 	printf("%d\n", s[i].roll);
	// 	printf("%s\n", s[i].name);
	// 	printf("%s\n", s[i].dep);
	// 	printf("%s\n", s[i].cors);
	// 	printf("%d\n", s[i].yoj);	
	// }
	pyear(s, n);
	details(s, n);
	printf("\n");
	return 0;
}

void pyear(struct students *p, int n)
{
	int pyr, i;
	scanf("%d", &pyr);
	for(i=0; i<n; i++)
	{
		if(p[i].yoj==pyr)
			printf("%s\n", p[i].name);
	}
}
void details(struct students *p, int n)
{
	int i, roll_no;
	scanf("%d", &roll_no);
	for(i=0; i<n; i++)
	{
		if(p[i].roll==roll_no)
		{
			printf("%s\n", p[i].name);
			printf("%s\n", p[i].dep);
			printf("%s\n", p[i].cors);
			printf("%d\n", p[i].yoj);
		}
	}
}