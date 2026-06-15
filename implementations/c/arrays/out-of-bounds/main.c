#include <stdio.h>

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};

  size_t length = sizeof(numbers) / sizeof(numbers[0]);
  size_t index = length;

  printf("Valid indexes: 0 to %zu\n", length - 1);
  printf("Trying to access index: %zu\n", index);

  // This is out-of-bounds access and can lead to undefined behavior
  printf("numbers[%zu] = %d\n", index, numbers[index]);

  return 0;
}
