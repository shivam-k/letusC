#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define i 0;
int summ(int);
int main() {
	int n;
	scanf("%d", &n);
	printf("sum = %d\n", summ(n));
	return 0;
}

int summ(int x) {
	int sum, i;
	if(count==0) {
		i=1;
	}
	if(i<=x)
		count++;
		sum = i + summ(i+1);	
	else {
		return(sum);
	}

}