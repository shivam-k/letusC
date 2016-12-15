#include <stdio.h>
#include <stdlib.h>

int main() {
 	int c, n, f;
 	printf("Enter the case you got(1-3) and number of subjects you fail in(1-3): ");
 	scanf("%d", &c);
 	scanf("%d", &f);
 	switch(c) {
 		case 1:
 			if(f<=3)
 				printf("you'll get 5 grace marks per subjects\n");
 			else
 				printf("you won't get any grace marks\n");
 			break;
 		case 2:
 		 	if(f<=2)
 				printf("you'll get 4 grace marks per subjects\n");
 			else
 				printf("you won't get any grace marks\n");
 			break;
 		 	break;
 		 case 3:
 		 	if(f<=1)
 				printf("you'll get 5 grace marks per subjects\n");
 			else
 				printf("you won't get any grace marks\n");
 			break;
 		 	break;
 		 default :
 		 	printf("Choose the right option\n");
 	}

	return 0;
}