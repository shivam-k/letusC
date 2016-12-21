/*---- I can do it -----*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	//char *f0 = "a";
	//char *f1 = "b";
	char *fa="a";
	char *fb="b";
	char *fn, *temp;
	for(i=2; i<=n; i++)
	{
		fn = strcat(fb, fa);
		//if(i<n)
		//{
		printf("%s\n", fn);
			temp = fb;
			fn = fb;
			fa = fb;
		//}
		//else
		//	break;
	}
	printf("%s\n", fn);

	return 0;
}
