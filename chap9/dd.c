/*--- I can do it ----*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char s[20];
	scanf("%s", s);
	printf("%d\n", atoi(s));   //atoi function is defined inside stdlib.h header file. 
	                           //Function atio converts the string parameter to an integer. 
	                           //If no valid conversion exist for that string then it returns zero.
	return 0;
}