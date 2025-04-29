#include <stdio.h>
#include <stdlib.h>

typedef struct IntArray {
  int *array;
  int size;
  int capacity;
} IntArray;

void print_array(IntArray a);