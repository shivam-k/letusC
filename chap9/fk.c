/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void para(int, int);

int main(void)
{
	char num[10];
	int cha[20];
	while(1)
	{
		scanf("%s", num);
		if(strlen(num)>9)
			printf("Leass than or equal to nine digits in lenght\n");
		else
			break;
	}
	int len = strlen(num), count, i;
	int j = len-1;
	count = len;
	int n = atoi(num);
	//assigning the all characters to different char array
	for(int i=0; i<len; i++)
	{
		cha[i] = n%10;
		n = n/10;
	}
	for(i=len-1; i>=0; i--)
	{
		if(count==2)
		{
			para((cha[i]*10)+cha[i-1], count);
			break;
		}
		else if(count==5 || count==7 || count==9)
		{
			para((cha[i]*10)+cha[i-1], count);
			i--;
			count--;
		}
		else
			para(cha[i], count);
		count--;
	}

	printf("\n");
	return 0;
}




void para(int x, int y) 
{
	char str1[][20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	char str2[][20] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
"Eighteen", "Nineteen"};
	char str3[][20] = {"Ten", "Twenty", "Thirty", "Fourty", "Fifty","Sixty", "Seventy", "Eighty", "Ninety"};
	char str4[][20] = {"Hundred","Thousnad","Lakh", "Crore"};
	int i, j, x1, x2;
	//printf("x = %d, count = %d\n", x, y);
	switch(y)
	{
		case 1:
			printf(" %s ",str1[x]);
			break;
		case 2:
			if(x>=11 && x<=19)
			{
				x = x%10;
				printf(" %s ", str2[x-1]);
			}
			else if(x%10==0)
			{
				x = x/10; 
				printf(" %s ", str3[x-1]);
			}
			else
			{
				x1 = x%10;
				x = x/10; 
				x2 = x%10;
				printf(" %s ", str3[x2-1]);
				printf(" %s ", str1[x1]);
			}
			break;
		case 3:
			if(x==0)
				break;
			else
			{
				printf(" %s ", str1[x]);
				printf(" %s ", str4[0]);
				break;
			}
		case 4:
		case 5:
			if(x==0)
				break;
			else if(x<10)
			{
				printf(" %s ", str1[x]);
				printf(" %s ", str4[1]);
			}
			else 
			{
				if(x>=11 && x<=19)
				{
					x = x%10;
					printf(" %s ", str2[x-1]);
				}
				else if(x%10==0)
				{
					x = x/10; 
					printf(" %s ", str3[x-1]);
				}
				else
				{
					x1 = x%10;
					x = x/10; 
					x2 = x%10;
					printf(" %s ", str3[x2-1]);
					printf(" %s ", str1[x1]);
				}
				printf(" %s ", str4[1]);	
			}
			break;
		case 6:
		case 7:
			if(x==0)
				break;
			else if(x<10)
			{
				printf(" %s ", str1[x]);
				printf(" %s ", str4[2]);
			}
			else 
			{
				if(x>=11 && x<=19)
				{
					x = x%10;
					printf(" %s ", str2[x-1]);
				}
				else if(x%10==0)
				{
					x = x/10; 
					printf(" %s ", str3[x-1]);
				}
				else
				{
					x1 = x%10;
					x = x/10; 
					x2 = x%10;
					printf(" %s ", str3[x2-1]);
					printf(" %s ", str1[x1]);
				}
				printf(" %s ", str4[2]);	
			}
			break;
		case 8:
		case 9:
			if(x==0)
				break;
			else if(x<10)
			{
				printf(" %s ", str1[x]);
				printf(" %s ", str4[3]);
			}
			else 
			{
				if(x>=11 && x<=19)
				{
					x = x%10;
					printf(" %s ", str2[x-1]);
				}
				else if(x%10==0)
				{
					x = x/10; 
					printf(" %s ", str3[x-1]);
				}
				else
				{
					x1 = x%10;
					x = x/10; 
					x2 = x%10;
					printf(" %s ", str3[x2-1]);
					printf(" %s ", str1[x1]);
				}
				printf(" %s ", str4[3]);	
			}
			break;
	}
}
