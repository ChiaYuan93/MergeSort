#include "unity.h"
#include "mergeSort.h"
#include "mock_mergeSortStub.h"

void setUp(void){}

void tearDown(void){}

void test_mergeSort_with_arraySize_4_should_recursive_call_with_2(void) {
  int array[4] = {2, 1, 5, 4};
  int arrayExpect[4] ={2, 1, 5, 4,};
  // Mock recursive call: Expecting the next immediate recursive call to because
  // called with 2
  _mergeSort_Expect(arrayExpect, 0, 2);
  _mergeSort_Expect(array, 3, 4);
  mergeSort(array, 0, 4);
}

void test_mergeSort_with_arraySize_1_should_recursive_call_with_1(void) {
  int array[1] = {2};
  int arrayExpect[1] ={2};
  // Mock recursive call: Expecting the next immediate recursive call to because
  // called with 1
  _mergeSort_Expect(arrayExpect, 0, 0);
  _mergeSort_Expect(array, 1, 1);
  mergeSort(array, 0, 1);
}
