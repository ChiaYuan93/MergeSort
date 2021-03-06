#include <stdio.h>
#include "mergeSort.h"

void mergeArray(int *array, int arrayHead, int halfArray, int arraySize){
  int x = 0, y = 0;
  int m = halfArray-arrayHead+1, n = arraySize-halfArray;
  int firstHalf[m], secondHalf[n];
  while(x<m){
    firstHalf[x] = array[arrayHead+x];  
    x++;
  }
  x = 0;
  while(x<n){
    secondHalf[x] = array[halfArray+x+1];
    x++;
  }
  x = 0;

  while(x<m || y<n){   
    if(y >= n){
      array[arrayHead++] = firstHalf[x++];
      continue;
    }
    if(x >= m){
      array[arrayHead++] = secondHalf[y++];
      continue;
    }
   if(firstHalf[x] < secondHalf[y])
     array[arrayHead++] = firstHalf[x++];
   else
     array[arrayHead++] = secondHalf[y++];
  }
} 

void mergeSort(int *array, int arrayHead, int arraySize){
  if(arrayHead<arraySize){
    int halfArray = (arrayHead+arraySize)/2;
    _mergeSort(array, arrayHead, halfArray);
    _mergeSort(array, halfArray+1, arraySize);
    mergeArray(array, arrayHead, halfArray, arraySize);
  }
}