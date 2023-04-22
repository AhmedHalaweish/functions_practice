#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //contains malloc function
#include <string.h>
#include <math.h>
void is_armstrong(unsigned int n);
void is_perfect(unsigned int n);
int main()
{
	unsigned int number = 496;
	is_armstrong(number);
	is_perfect(number);
	return 0;
}
/*perfect number when the sum of all divisors of the 
number n(except the number n divisor)  equals the number n
example>> 6=3+2+1
*/

void is_perfect(unsigned int n) 
{
	unsigned int sum_divisors = 0;
	for(int counter=1;counter<=(n/2);counter++)
	{
		if(n%counter==0)
		{
			sum_divisors += counter;
		}
	}
	if (sum_divisors == n) 
	{
		printf("The %i is a Perfect number.\n", n);
	}
	else
	{
		printf("The %i is not a Perfect number.\n", n);
	}
}

/*the Armstrong number is the number in any given number base, 
which forms the total of the same number, 
when each of its digits is raised to the power of the number of digits in the number.*/
void is_armstrong(unsigned int n) {

	unsigned char array_number[20];
	unsigned int number_length;
	unsigned int digits_sum=0;
	unsigned int temp = 0;
	_itoa(n, array_number, 10);
	printf("array of digits = %c\n", array_number[0]);
	number_length=strlen(array_number); //now you got the length of number
	for(int counter=0;counter<number_length;counter++)
	{
		temp = (array_number[counter])-'0';
		digits_sum += pow(temp, number_length);
	//	printf("%i\n", digits_sum);
		//printf("%i,,, array_number=%i\n", digits_sum, (int)array_number[0]);
	}
	if (digits_sum == n) {
		printf("The %i is an Armstrong number.\n", n);
	}
	else
	{
		printf("The %i is not an Armstrong number.\n", n);
	}


}
/*
int checkArmstrong(int n1)
{
	int ld, sum, num;
	sum = 0;
	num = n1;
	while(num!=0)
	{
		ld = num % 10;  // find the last digit of the number
		sum += ld * ld * ld;  //calculate the cube of the last digit and adds to sum
		num = num/10;
	}
	return (n1 == sum);
}

*/