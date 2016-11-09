#include "unity.h"
#include "mergeSort.h"

void setUp(void){}

void tearDown(void){}

void test_given_only_one_number_in_an_array_should_return_sorted_array(void)
{
 int arraySize = 1;
 int array[1] = {2};
 int expectResult[1] = {2};
  
 divideArray(array, 0, arraySize-1);
 
 TEST_ASSERT_EQUAL_INT_ARRAY(expectResult, array, 1);
}

void test_given_two_numbers_in_an_array_should_return_sorted_array(void)
{
 int arraySize = 2;
 int array[2] = {100,2};
 int expectResult[2] = {2,100};
  
 divideArray(array, 0, arraySize-1);
 
 TEST_ASSERT_EQUAL_INT_ARRAY(expectResult, array, 1);
}

void test_given_random_numbers_array_should_return_sorted_array(void)
{
 int arraySize = 6;
 int array[6] = {2,1,5,4,8,9};
 int expectResult[6] = {1,2,4,5,8,9};
  
 divideArray(array, 0, arraySize-1);
 
 TEST_ASSERT_EQUAL_INT_ARRAY(expectResult, array, 6);
}

void test_given_two_same_numbers_in_an_array_should_return_successful_sorted_array(void)
{
 int arraySize = 6;
 int array[6] = {3,1,4,5,4,6};
 int expectResult[6] = {1,3,4,4,5,6};
  
 divideArray(array, 0, arraySize-1);
 
 TEST_ASSERT_EQUAL_INT_ARRAY(expectResult, array, 6);
}

void test_given_contain_negative_numbers_in_an_array_should_return_successful_sorted_array(void)
{
 int arraySize = 6;
 int array[6] = {-3,1,2,-5,4,6};
 int expectResult[6] = {-5,-3,1,2,4,6};
  
 divideArray(array, 0, arraySize-1);
 
 TEST_ASSERT_EQUAL_INT_ARRAY(expectResult, array, 6);
}