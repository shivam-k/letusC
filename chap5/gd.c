#include <stdio.h>
#include <math.h>

void prime(int);

int main() {
	int n;
	scanf("%d", &n);
	prime(n);

	return 0;
}

//defining prime() function

void prime(int x) {
     int i,max, count;
     printf("Prime factor: ");
     while(max!=1) {
     	max=1;
     	for(i=2; i<x; i++) {
     		count = x%i;  // getting remainder of the number by dividing i's value
     		if(count==0 && i > max) {
     			max = i; // assigning max divider of x
     		}
     	}
     	if(max >= 2) {
     		printf("%d * ", x/max);
     		x = max;
     	}
     	else if(max == 1) { // x is not divisible anymore
     		printf(" %d\n", x);
     		break;
     	}
     } 
}