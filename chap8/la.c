#include <stdio.h>

int main()
{
	int threed[3][2][3] = 
	{
		{
			{2,4,6},
			{7,8,121}
		},
		{
			{8,9,15},
			{12,15,26}
		},
		{
			{22,42,27},
			{56, 3,32}
		}
	};
	printf("%d %d\n", threed[0][0][0], threed[2][1][2]);
}