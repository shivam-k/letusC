/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
struct customers
{
	int accn;
	char name[20];
	float bal;
};
void details(struct customers *, int);
void withdraw(struct customers *, int);
int main(void)
{
	struct customers cus[200];
	int i, n;
	scanf("%d", &n); //number of customers in bank
	for(i=0; i<n; i++)
	{
		scanf("%d %s %f", &cus[i].accn, cus[i].name, &cus[i].bal);

	}

	details(cus, n);
	withdraw(cus, n);
	return 0;
}

void details(struct customers *p, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(p[i].bal<100)
			printf("%s %d\n", p[i].name, p[i].accn);
	}
}

void withdraw(struct customers *p, int n)
{
	int i, t, ano, amount;
	scanf("%d %d %d", &ano, &amount, &t);  //input for account no, amount and code(0 or 1)
	if(t==1)
		printf("Thanks\n");
	else if(t==0)
	{
		for(i=0; i<n; i++)
		{
			if(p[i].accn==ano)
			{
				if(p[i].bal<100)
					printf("The balance is insufficient for the specified withdrawal\n");
				else
					printf("Thanks\n");
			}
		}
	}
	else
		printf("Thanks\n");

}