/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
// struct book
// {
// 	char name[25];
// 	char author[25];
// 	int callno;
// };
// void display(struct book (*b)[2], int);
int main(void)
{
  struct student 
  {
    char name[20];
    int roll;
  };
  struct student s1 = { "adam", 101 };
  struct student s2 = s1;
  printf("%s",s2.name);

	return 0;
}

// void display(struct book (*b)[2], int n)
// {
// 	int i;
// 	for(i=0; i<n; i++)
// 	{
// 		printf("%s\n%s\n%d\n", b[i]->name, b[i]->author, b[i]->callno);
// 	}
// }