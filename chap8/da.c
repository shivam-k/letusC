#include <stdio.h>
int main() {
	int i, n, arr[25], count, state;
	for(i=0; i<=24; i++) {
		scanf("%d", &arr[i]);
	}
	while(1) {
		count = 0;
		for(i=0; i<=24; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
		scanf("%d", &n);
		for(i=0; i<=24; i++)
		{
			if(arr[i]==n)
				count++;
		}
		if(count == 0)
			printf("\nNo. not present in array\n");
		else
			printf("\n%d times no. %d is present in array\n", count, n);
		printf("\npress 0 to exit and 1 to continue: ");
		scanf("%d", &state);
		if(state==0)
			break;
		else
			continue;
	}

	return 0;
}