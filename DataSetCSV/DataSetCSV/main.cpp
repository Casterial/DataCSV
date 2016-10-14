#include "SortFunctions.h"
#include "CSV.h"


#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <istream>
#include <algorithm>
#include <ctime>

//assigning class functions.
SFunc SortFunc;
CSVRead CSV;

int main()
{
	//select your sort

	//creating user random input for number in data
	int n, i, x;
	std::cout << "Please enter the size of your array:\n";
	std::cin >> n;
	int arr[10000];
	srand((unsigned)time(0));

	int t = 0;
	
	for (int i = 0; i < n+1; i++)
	{
		arr[i] = (rand() % 10000) + 1;
	}
	int SortSelect;
	std::cout << "Please select which sort you wish to run:\n";
	std::cout << "\t1. Heap Sort\n";
	std::cout << "\t2. Radix Sort\n";
	std::cout << "\t3. Selection Sort\n";
	std::cout << "\t4. Insertion Sort\n";
	//std::cout << "\t5. Quick Sort\n";
	std::cin >> SortSelect;

	while (SortSelect != -1)
	{
		switch (SortSelect)
		{
		case 1:
			std::cout << "Heap Sort" << std::endl;
			std::cin.get();
			SortFunc.BuildMaxHeap(arr, n);
			SortFunc.HeapSort(arr, n);
			std::cout << "\n\n Sorted Array\n";
			for (i = 1; i <= n; i++)
			{
				std::cout << arr[i] << std::endl;
			}
			std::cout << "Press enter to continue.\n";
			std::cin.get();
			break;
		case 2:
			//RADIX SORT FUNCTION
			std::cout << "\n\n\nRADIX SORT\n";
			std::cin.get();
			SortFunc.RadixSort(arr, n);
			std::cout << "Press enter to continue.\n";
			std::cin.get();
			break;
		case 3:
			//SELECTIONSORT FUNCTION
			std::cout << "\nSELECTION SORT START\n\n";
			std::cin.get();
			SortFunc.SelectionSort(arr, n);
			std::cout << "\n\n\n";
			std::cout << "Press enter to continue.\n";
			std::cin.get();
			break;
		case 4:
			//INSERTION SORT FUNCTION
			std::cout << "\n\nINSERTION SORT START\n";
			std::cin.get();
			SortFunc.InsertionSort(arr, n);
			std::cout << std::endl;
			std::cout << "\n\n\n";
			std::cout << "Press enter to continue.\n";
			std::cin.get();
			break;
		case 5:
			//QUICK SORT FUNCTION
			std::cin.get();
			std::cout << "\n\nQUICK SORT START\n";
			/*
			int arr[8] = {110, 5, 10,3 ,22, 100, 1, 23};
			quicksort(arr, 0, (sizeof(arr)/sizeof(arr[0]))-1);
			print(arr, (sizeof(arr)/sizeof(arr[0])));
			*/
			SortFunc.QuickSort(arr, n, t);
			break;
		default:
			std::cout << "This is not a number, or sort. Please select again.\n";
			break;

		}
		std::cout << "\nPlease select which sort you wish to run:\n";
		std::cout << "\t1. Heap Sort\n";
		std::cout << "\t2. Radix Sort\n";
		std::cout << "\t3. Selection Sort\n";
		std::cout << "\t4. Insertion Sort\n";
		//std::cout << "\t5. Quick Sort\n";
		std::cin >> SortSelect;
	}

}