#include <stdio.h>
#include <string.h>

struct student
{
	int roll;
	char name[20];
	char dep[20];
	char course[20];
	int yoj;
};
void sdata(struct student);
void getnames(struct student *);

int main(void)
{
	int i, n;
	scanf("%d", &n);
	struct student s[250];
	for(i=0; i<n; i++)
	{
		scanf("%d %c %c %c %d", &s[i].roll, &s[i].name, &s[i].dep, &s[i].course, &s[i].yoj);
	}
	for(i=0; i<n; i++)
	{
		printf("%d %c %c %c %d\n", s[i].roll, s[i].name, s[i].dep, s[i].course, s[i].yoj);
		i++;
	}
	//sdata(s);
	//getnames(s); 

	return 0;
}
// void sdata(struct student s)
// {	int i=0;
// 	while(s[i]!='\0')
// 	{
// 		printf("%d %c %c %c %d\n", s[i].roll, s[i].name, s[i].dep, s[i].course, s[i].yoj);
// 		i++;
// 	}
// }

// void getnames(struct student *b)
// {
// 	scanf("")
// }