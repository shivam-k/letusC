#include <stdio.h>
int main() {
    
    int matchsticks = 21, user, computer;
    printf("Each time, both of you have to pick 1 to 4 matchsticks only: ");
    do {
    	while (matchsticks > 1) {
    		printf("\nRemaining Sticks = %d", matchsticks);
	    	printf("\nEnter the value: ");
	    	scanf("%d", &user);
	    	if(user > 4) {
	    		printf("\nDon't pick more than 4 !!");
	    		continue;
	    	}
	    	else {
	    		computer = 5 - user;
	    		printf("\nComputer picks %d", computer);
	    	}
		    matchsticks = matchsticks - (user+computer);
	    }
	    if(matchsticks == 1) {
	    	printf("\nOne matchstick is left for you.");
	    	printf("\nSo, Computer wins !!\n");
	    }
    } while(matchsticks > 1);


	return 0;
}