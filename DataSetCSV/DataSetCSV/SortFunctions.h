#ifndef _SORTFUNCTIONS_H
#define _SORTFUNCTIONS_H
#include <cstdlib>

class SFunc
{
public:
	void SelectionSort(int A[], int n);
	void QuickSort(int *A, int start, int end);
	void InsertionSort(int arr[], int length);
	void PrintRadix(int *input, int n);
	void RadixSort(int *input, int n);
	void maxHeap(int *a, int i, int n);
	void HeapSort(int *a, int n);
	void BuildMaxHeap(int *a, int n);
};

#endif