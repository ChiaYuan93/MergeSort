/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_given_only_one_number_in_an_array_should_return_sorted_array(void);
extern void test_given_two_numbers_in_an_array_should_return_sorted_array(void);
extern void test_given_random_numbers_array_should_return_sorted_array(void);
extern void test_given_two_same_numbers_in_an_array_should_return_successful_sorted_array(void);
extern void test_given_contain_negative_numbers_in_an_array_should_return_successful_sorted_array(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_mergeSort.c");
  RUN_TEST(test_given_only_one_number_in_an_array_should_return_sorted_array, 10);
  RUN_TEST(test_given_two_numbers_in_an_array_should_return_sorted_array, 21);
  RUN_TEST(test_given_random_numbers_array_should_return_sorted_array, 32);
  RUN_TEST(test_given_two_same_numbers_in_an_array_should_return_successful_sorted_array, 43);
  RUN_TEST(test_given_contain_negative_numbers_in_an_array_should_return_successful_sorted_array, 54);

  return (UnityEnd());
}
