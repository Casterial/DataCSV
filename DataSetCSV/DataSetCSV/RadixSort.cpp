#include <iostream>
#include <string>
#include "SortFunctions.h"
#include <utility>
/*
RADIX SORTING ALGOITHM FUNCTION
*/
void SFunc::PrintRadix(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
	std::cout << arr[i] << "\t";
	}
}

void SFunc::RadixSort(int *input, int n)
{
	int i;

	// find the max number in the given list.
	// to be used in loop termination part.
	int maxNumber = input[0];
	for (i = 1; i < n; i++)
	{
		if (input[i] > maxNumber)
			maxNumber = input[i];
	}

	// run the loop for each of the decimal places
	int exp = 1;
	int *tmpBuffer = new int[n];
	while (maxNumber / exp > 0)
	{
		int decimalBucket[10] = { 0 };
		// count the occurences in this decimal digit.
		for (i = 0; i < n; i++)
			decimalBucket[input[i] / exp % 10]++;

		// Prepare the position counters to be used for re-ordering the numbers
		// for this decimal place.
		for (i = 1; i < 10; i++)
			decimalBucket[i] += decimalBucket[i - 1];

		exp *= 10;
		std::cout << "\nPASS   : ";
		PrintRadix(input, n);
	}
}