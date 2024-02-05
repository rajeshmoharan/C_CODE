// C program to check and rectify 
// divide by zero condition 
#include <stdio.h> 
#include <stdlib.h> 

void function(int); 

int main() 
{ 
	int x = 0; 
	function(x); 
	return 0; 
} 

void function(int x) 
{ 
	float fx; 

	if (x == 0) { 
		printf("Division by Zero is not allowed"); 
		fprintf(stderr, "Division by zero! Exiting...\n"); 
		exit(EXIT_FAILURE); 
	} 
	else { 
		fx = 10 / x; 
		printf("f(x) is: %.5f", fx); 
	} 
}
