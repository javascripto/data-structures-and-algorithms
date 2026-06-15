#include <stdio.h>

void inspect(int *numbers, size_t length) {
  printf("Inside function:\n");
  printf("  sizeof(numbers): %zu bytes\n", sizeof(numbers)); // This will print the size of the pointer, not the array
  printf("  length received: %zu\n", length);
  printf("  numbers address: %p\n", (void *)numbers);
  printf("  &numbers[0]: %p\n", (void *)&numbers[0]);
}

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};
  size_t length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Inside main:\n");
  printf("  sizeof(numbers): %zu bytes\n", sizeof(numbers));
  printf("  length calculated: %zu\n", length);
  printf("  numbers address: %p\n", (void *)numbers);
  printf("  &numbers[0]: %p\n", (void *)&numbers[0]);

  inspect(numbers, length);

  return 0;
}
