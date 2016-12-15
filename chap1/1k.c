#include <stdio.h>
int main() {

	int tp, prof, tsp, count;
	printf("\nEnter the toatl selling price and profits on 15 items respectively: ");
	scanf("%d %d", &tp, &prof);

	tsp = tp - prof;
	printf("\nCongrats, you had %d reupees profit on each item !\n", tsp/15);

	return 0; 

}