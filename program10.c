/*
# based on practice tasks in https://www.w3resource.com/c-programming-exercises/function/index.php
Write a program in C to print all perfect numbers in a given range using the function. 
Input lowest search limit of perfect numbers : 1
Input lowest search limit of perfect numbers : 100
Expected Output :
 The perfect numbers between 1 to 100 are :                                      
 6   28  
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //contains malloc function
#include <string.h>
#include <math.h>

unsigned char is_perfect(unsigned int n);
void find_perfect(unsigned int low_limit, unsigned int high_limit);

int main() {
	
	unsigned int low_limit=0;
	unsigned int high_limit = 0;
	printf("please enter lowest search limit of perfect numbers :");
	scanf("%i",&low_limit);
	printf("please enter high search limit of perfect numbers :");
	scanf("%i", &high_limit);
	find_perfect(low_limit, high_limit);

	return 0;
}



void find_perfect(unsigned int low_limit, unsigned int high_limit) 
{
	unsigned int sum_divisors = 0;
	int counter2 = 0;
	while(low_limit<=high_limit)
	{
		if (is_perfect(low_limit)) 
		{
			printf("%i ", low_limit);
		}
		low_limit++;
	}
		
	
}

unsigned char is_perfect(unsigned int n)
{
	unsigned int sum_divisors = 0;
	unsigned char ret_val = 0;
	for (int counter = 1; counter <= (n / 2); counter++)
	{
		if (n % counter == 0)
		{
			sum_divisors += counter;
		}
	}
	if (sum_divisors == n)
	{
		ret_val = 1;//  number n is a Perfect number
	}
	
	return ret_val;
}

/*perfect number when the sum of all divisors of the
number n(except the number n divisor)  equals the number n
example>> 6=3+2+1
*/
