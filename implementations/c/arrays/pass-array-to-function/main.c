#include <stdio.h>

void print_array(const int *numbers, size_t length) {
  for (size_t index = 0; index < length; index++) {
    printf("numbers[%zu] = %d\n", index, numbers[index]);
  }
}

int sum_array(const int *numbers, size_t length) {
  int sum = 0;

  for (size_t index = 0; index < length; index++) {
    sum += numbers[index];
  }

  return sum;
}

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};
  size_t length = sizeof(numbers) / sizeof(numbers[0]);

  print_array(numbers, length);

  int sum = sum_array(numbers, length);
  printf("sum = %d\n", sum);

  return 0;
}
