#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, k, t, temp, count, num, pnum, arr[1000];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        
        num = 0;
        for(x=n-1; x>=1; x--)
        {
            j=0;
            count = x;
            do {
                arr[j] = count%10;
                count = count/10;
                j++;
            } while(n>0);
            for(k=j-1; k>=0; k--)
            {   
                num = num + arr[k]*temp;
                temp = temp*10; 
            }
        }
    }

    return 0;
}
