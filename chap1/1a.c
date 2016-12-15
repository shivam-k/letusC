// #ins:

// Data Types in C
// Use of bool in C
// Integer Promotions in C
// Quiz on Data Types in C
// Comparison of a float with a value in C
// Storage Classes:

// Storage Classes in C
// Static Variables in C
// Understanding “extern” keyword in C
// What are the default values of static variables in C?
// Understanding “volatile” qualifier in C
// Const Qualifier in C
// Initialization of static variables in C
// Understanding “register” keyword in C
// Quiz on Storage Classes in C




// including header file
#include <stdio.h>
 int main() {
 	float x, y, z, gs;
 	// basic salary as input 
 	scanf("\n%f", &x);
 	y = (x*40)/100 ;
 	z = (x*20)/100 ;
 	gs = x - (y + z);
 	printf("\nGross Salary = %f\n", gs);
 	return 0;
 }