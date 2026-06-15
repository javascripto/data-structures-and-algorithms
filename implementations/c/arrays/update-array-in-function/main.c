#include <stdio.h>

void double_values(int *numbers, size_t length) {
  for (size_t index = 0; index < length; index++) {
    numbers[index] *= 2;
  }
}

void print_array(const int *numbers, size_t length) {
  for (size_t index = 0; index < length; index++) {
    printf("numbers[%zu] = %d\n", index, numbers[index]);
  }
}

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};
  size_t length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Before:\n");
  print_array(numbers, length);

  double_values(numbers, length);

  printf("\nAfter:\n");
  print_array(numbers, length);

  return 0;
}
