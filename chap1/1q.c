#include <stdio.h>
#include <math.h>

int main() {
	float l,m;
	l = 1189; m = 841;
	printf("\nPaper sizes are as follows:\nA0 has (%f-%f) mm \nA1 has (%f-%f) mm \nA2 has (%f-%f) mm \nA3 has (%f-%f) mm \nA4 has (%f-%f) mm \nA5 has (%f-%f) mm \nA6 has (%f-%f) mm \nA7 has (%f-%f) mm \nA8 has (%f-%f) mm \n", l,m,l*2,m*2,l*4,m*4,l*8,m*8,l*16,m*16,l*32,m*32,l*64,m*64,l*128,m*128,l*256,m*256);
	return 0;
}