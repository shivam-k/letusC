#include <stdio.h>
void prime(int);
int main() {
	int n;
	scanf("%d", &n);
	prime(n);

	return 0;
}

void prime(int x) {
	int i, j, count, temp, mm, result, test, hack;
	while(1) {
		test=0;
		for(i=2; i<x; i++) {
			mm=1;
			count = x%i;
			if(count==0 && i>mm) {
				mm=i;
				test++;
			} 
		}
		for(j=2; j<mm; j++) {
			temp = mm%j;
			if(temp==0 && x==mm*j) {
				hack = j;
				break;
			}
		}
		if(test==0 || mm==2) {
			printf("%d", hack);
			printf("%d", mm);
			break;
		}
		else {
			x = mm;
			printf("%d\n", hack);
		}
	}

	printf("\n");
}