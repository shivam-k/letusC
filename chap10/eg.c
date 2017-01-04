#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct date
{
	int dd, mm, yy;
};

int compare(struct date n1, struct date n2)
{
	if(n1.yy==n2.yy)
	{
		if(n1.mm==n2.mm)
		{
			if(n1.dd==n2.dd)
				return 0;
			else
				return 1;
		}
		else
			return 1;
	}
	else
		return 1;
}

int main()
{
	struct date n1, n2;
	scanf("%d %d %d", &n1.dd, &n1.mm, &n1.yy);
	scanf("%d %d %d", &n2.dd, &n2.mm, &n2.yy);
	printf("%d\n", compare(n1, n2));

	return 0;
}