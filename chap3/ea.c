#include <stdio.h>
int main(){
	int n, i, j, temp, count;
	for(n=2; n<=500; n++) {
		j=0;
		for(i=2; i<=n-1; i++){
			count = n%i;
			if(count==0) {
				j++;
			}
		}
		if(j==0)
			printf("%d\n", n);
	}

	return 0;
}