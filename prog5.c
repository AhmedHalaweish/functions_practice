#include <stdio.h>
#include <math.h>
// Write a program in C to swap two numbers using a function
void series_sum(unsigned int num1);
unsigned int factorial(unsigned int number1);
/*
int main() {

	series_sum(5);
	return 0;
}
*/
unsigned int factorial(unsigned int number1) {
	unsigned int factorial_sum = 1;
	unsigned int counter = 0;
	for (counter = 1; counter <= number1; counter++)
	{
		factorial_sum *= counter;
	}
	return factorial_sum;
}

void series_sum(unsigned int num1) {


	unsigned int sum = 0;
	unsigned int counter = 0;
	for (counter = 1; counter <= num1; counter++) 
	{
		sum += (factorial(counter) / counter);
	}
	printf("series sum =%i", sum);
}