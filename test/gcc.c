#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   int n, k, i, fact, t;
   while(1)
   {
    scanf("%d", &t);
   }
   for(i=0; i<t; i++) 
   {
        scanf("%d", &n);
        fact = 1;
        for(k=1; k<=n; k++)
        {
            fact = fact * k;
        }
        printf("%d\n", fact);
   }
 
    return 0;
} 