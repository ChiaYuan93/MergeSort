#ifndef mergeSortStub_H
#define mergeSortStub_H

#ifdef TEST
// This is used in test code (mocking/non-mocking)
# include "mergeSort.h"
#else
// This is used in production code
# define _mergeSort  mergeSort
#endif // TEST

void _mergeSort(int array[], int arrayHead, int arraySize);

#endif // mergeSortStub_H
