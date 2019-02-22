#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main (int argc, char* argv[]) {
  int arraySize = atoi(argv[1]);
  //int arr[arraySize];
  int *arr;
  arr = malloc(sizeof(int)*arraySize);

  for (int i = 0; i < arraySize; i++) {
    arr[i] = rand() % 100 + 1;
  }
  int valueRetrieved = arr[4096];

  printf("The array access has happened and the value is %d \n", valueRetrieved);
  free(arr);
}
