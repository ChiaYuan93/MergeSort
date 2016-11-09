#include "CustomAssertion.h"
#include "unity.h"

void customTestArray(int *expectedArray, int *actualArray, int lineNumber)
{
  int i, temp, num, arraySize;
  
  num = sizeof(actualArray)/sizeof(int);
  arraySize = sizeof(expectedArray)/sizeof(int);
  
    CUSTOM_TEST_FAIL(lineNumber, "Array[size] Expected %d was %d.", arraySize, num);
  
  for (i = 0; i<num; i++)
  {
    if(expectedArray[i] != actualArray[i])
      CUSTOM_TEST_FAIL(lineNumber, "Array[%d] Expected %d was %d.", i, expectedArray[i], actualArray[i]);
  }
}