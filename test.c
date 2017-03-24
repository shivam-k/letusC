#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// commit on master branch...dodge...commit on hotfix branch 
int main(void)
{
	int sum2=0;
    int t, n, i, j, pass=0, con, count1=0, count2=0, chk1, chk2, k=0, m=0, blarr[26], slarr[26], flow, len;
    char s[500];
    for(i=65; i<=90; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j!=0)
                flow=1;
            else
            {
                flow=0;
                break;
            }
        }
        if(flow==1)
        {
            blarr[k] = i;
            k++;
        }
    }
    m = 0;
    for(i=97; i<=122; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j!=0)
                flow=1;
            else
            {
                flow=0;
                break;
            }
        }
        if(flow==1)
        {
            slarr[m] = i;
            m++;
        }
    }
    for(i=0; i<k; i++)
        printf("%d %c * ", blarr[i], blarr[i]);
    printf("\n");
    for(i=0; i<m; i++)
        printf("%d %c * ", slarr[i], slarr[i]);
    printf("\n");
    scanf("%d", &t);
    for(con=0; con<t; con++)
    {
        scanf("%d", &n);
        scanf("%s", s);
        len = strlen(s);
        for(i=0; i<len; i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                for(j=0; j<k; j++) //loop refers to array containing odd number ascii values beetween 65 & 90
                {
                    if(blarr[j]>s[i])
                    {
                        count1++;
                        chk1 = blarr[j] - s[i];
                        chk2 = s[i] - blarr[j-1];
                        if(chk1<chk2)
                            printf("%c", blarr[j]);
                        else if(chk1>chk2)
                            printf("%c", blarr[j-1]);
                        else if(chk1==chk2)
                            printf("%c", blarr[j-1]);
                        break;
                    }
                    if(j==k-1 && count1==0)
                        printf("%c", blarr[j]);
                }
            }
            else if(s[i]>=97 && s[i]<=122)  //loop refers to array containing odd number ascii values beetween 65 & 90
            {

            }
        }
    }
 
    printf("\n");
 
    return 0;
}
