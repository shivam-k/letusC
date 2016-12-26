/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(void)
{
	char str1[][20] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
	char str2[][20] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
"eighteen", "nineteen"};
	char str3[][20] = {"Ten", "Twenty", "Thirty", "Fourty", "Fifty","Sixty", "Seventy", "Eighty", "Ninety"};
	char str4[][20] = {"Hundred","Thousnad", "Ten Thousnad","Lakh", "Ten Lakh"};
	char num[10], cha[20];
	scanf("%s", num);
	printf("%s\n", num);
	int len = strlen(num), count;
	int j = len-1;
	count = len;
	for(int i=0; i<len; i++)
	{
		cha[j] = num[i];
		j--;
	}
	printf("%s\n", cha);


	return 0;
}