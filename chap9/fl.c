/*---- I can do it ----*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
void stru(char);
int main(void)
{
   char num[10];
   while(1)
   {   
      scanf("%s", num);
      if(strlen(num)>5)
         printf("5 digits or less\n");
      else
         break;
   }
   int n = atoi(num), i;
   int len=strlen(num);
   printf("%s\n", num);
   for(i=0; i<len; i++)
   {
      stru(num[i]);
   }
	return 0;
}
void stru(char x)
{
   switch(x)
   {
      case '0': 
          printf("#####\n"); 
          printf("#   #\n"); 
          printf("#   #\n"); 
          printf("#   #\n"); 
          printf("#   #\n"); 
          printf("#   #\n"); 
          printf("#   #\n"); 
          printf("#####\n");
          break;
      case '1':
         printf(" #\n");
         printf("##\n");
         printf(" #\n");
         printf(" #\n");
         printf(" #\n");
         printf(" #\n");
         printf(" #\n");
         printf("###\n");
         break;
      case '2':
         printf("#####\n");
         printf("    #\n");
         printf("    #\n");
         printf("    #\n");
         printf("#####\n");
         printf("#\n");
         printf("#\n");
         printf("#####\n");
         break;
      case '3':
         printf("#####\n");
         printf("    #\n");
         printf("    #\n");
         printf("#####\n");
         printf("    #\n");
         printf("    #\n");
         printf("    #\n");
         printf("#####\n");
         break;
      case '4':
         printf("#\n"); 
         printf("#\n"); 
         printf("#\n"); 
         printf("#  #\n"); 
         printf("#####\n"); 
         printf("   #\n"); 
         printf("   #\n"); 
         printf("   #\n");
         break;
      case '5':
         printf("#####\n"); 
          printf("#    \n"); 
          printf("#    \n"); 
          printf("#####\n"); 
          printf("    #\n"); 
          printf("    #\n"); 
          printf("    #\n"); 
          printf("#####\n");
          break;
      case '6': 
             printf("#####\n"); 
             printf("#    \n"); 
             printf("#    \n"); 
             printf("#####\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#####\n"); 
              break;
      case '7': 
             printf("#####\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
              break;
      case '8': 
             printf("#####\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#####\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#####\n"); 
              break;
      case '9': 
             printf("#####\n"); 
             printf("#   #\n"); 
             printf("#   #\n"); 
             printf("#####\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("    #\n"); 
             printf("#####\n"); 
              break;
   }
}