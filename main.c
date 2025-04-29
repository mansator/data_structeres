#include "main.h"

void print_array(IntArray a) {
  for (int i = 0; i < a.size; i++) {
    printf("Element[%d]: %d\n", i, a.array[i]);
  } 
}

int main() {
  IntArray temperature = {0};  // Массив значений температуры за период
  printf("Enter the size: ");
  scanf("%d", &temperature.size);

  temperature.array = (int *)malloc(temperature.size * sizeof(int));
  if (temperature.array != NULL) {
    for (int i = 0; i < temperature.size; i++) {
      printf("Enter the element[%d]: ", i);
      scanf("%d", &temperature.array[i]);
    }
    
    print_array(temperature);
    temperature.array[temperature.size - 1] = 0;
    temperature.size -= 1;
    printf("\n");
    print_array(temperature);
  }
  return 0;
}
