#include <stdio.h>
// Write a program in C to convert a decimal number to a binary number using a function
/*
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001
*/

void dec2bin(unsigned int decimal_number);
/*
int main() {

	dec2bin(35);
	return 0;
}


void dec2bin(unsigned int decimal_number) {
	unsigned int reminder = 0;
	unsigned char counter = 0;
	unsigned int binary_num = 0;
	unsigned int bit_place = 1;

	for(counter=0;counter<=7;counter++)
	{
		reminder = decimal_number % 2;
		binary_num = binary_num + reminder * bit_place;
		decimal_number = decimal_number / 2;
		bit_place *= 10;
		
	}
	
	printf("%i", binary_num);
}

*/