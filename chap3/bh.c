#include <stdio.h>
int main() {
	int dv, ov=0, i=1, count, temp, remainder;
	scanf("%d", &dv);

	if(dv >= 7) {
		do {
			remainder = dv % 8;
			dv = dv/8;
			ov = ov + remainder*i;
			i*=10;
		} while(dv > 0);
		printf("octal value = %d\n", ov);
	}
	else {
		printf("Octal Value = %d\n", dv);
	}


	return 0;
}