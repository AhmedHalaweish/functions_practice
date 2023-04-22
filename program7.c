#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //contains malloc function
//Write a program in C to get the largest element of an array using the function
/*
Test Data :
Input the number of elements to be stored in the array :5
Input 5 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
Expected Output :

The largest element in the array is : 5*/
unsigned int size_arr = 0;
unsigned int counter = 0;


int main() {
	printf("please enter the size of array= ");
	scanf("%d", &size_arr);

	unsigned int *array=(unsigned int *) malloc(size_arr*sizeof(int));
	printf("\nplease enter array values\n");
	
	for(counter=0;counter<size_arr;counter++)
	{
		scanf("%d", &array[counter]);
//		printf("element %i = %i \n", counter, array[counter]);

	}

	unsigned int max_num = largest_num_array(array, size_arr);
		printf("largest number in the array= %i", max_num);
	free(array);
	return 0;
}

unsigned int largest_num_array(const unsigned int array[], unsigned int size);


unsigned int largest_num_array(const unsigned int array[], unsigned int size) {

	unsigned int counter = 0;
	unsigned int max_number = 0;

	for (counter = 0; counter < size; counter++) 
	{
		if (array[counter] > max_number) 
		{
			max_number = array[counter];
		}
	}
	return max_number;
}
*/