#include "mergeSortStub.h"
#include "mergeSort.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}



void test_given_only_one_number_in_an_array_should_return_sorted_array(void)

{

 int arraySize = 1;

 int array[1] = {2};

 int expectResult[1] = {2};



 mergeSort(array, 0, arraySize-1);



 UnityAssertEqualIntArray(( const void*)(expectResult), ( const void*)(array), (_UU32)(1), (((void *)0)), (_U_UINT)18, UNITY_DISPLAY_STYLE_INT);

}



void test_given_two_numbers_in_an_array_should_return_sorted_array(void)

{

 int arraySize = 2;

 int array[2] = {100,2};

 int expectResult[2] = {2,100};



 mergeSort(array, 0, arraySize-1);



 UnityAssertEqualIntArray(( const void*)(expectResult), ( const void*)(array), (_UU32)(2), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_given_random_numbers_array_should_return_sorted_array(void)

{

 int arraySize = 6;

 int array[6] = {2,1,5,4,8,9};

 int expectResult[6] = {1,2,4,5,8,9};



 mergeSort(array, 0, arraySize-1);



 UnityAssertEqualIntArray(( const void*)(expectResult), ( const void*)(array), (_UU32)(6), (((void *)0)), (_U_UINT)40, UNITY_DISPLAY_STYLE_INT);

}



void test_given_two_same_numbers_in_an_array_should_return_successful_sorted_array(void)

{

 int arraySize = 6;

 int array[6] = {3,1,4,5,4,6};

 int expectResult[6] = {1,3,4,4,5,6};



 mergeSort(array, 0, arraySize-1);



 UnityAssertEqualIntArray(( const void*)(expectResult), ( const void*)(array), (_UU32)(6), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);

}



void test_given_contain_negative_numbers_in_an_array_should_return_successful_sorted_array(void)

{

 int arraySize = 6;

 int array[6] = {-3,1,2,-5,4,6};

 int expectResult[6] = {-5,-3,1,2,4,6};



 mergeSort(array, 0, arraySize-1);



 UnityAssertEqualIntArray(( const void*)(expectResult), ( const void*)(array), (_UU32)(6), (((void *)0)), (_U_UINT)62, UNITY_DISPLAY_STYLE_INT);

}
