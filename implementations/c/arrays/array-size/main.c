#include <stdio.h>

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};
  size_t array_bytes = sizeof(numbers);
  size_t element_bytes = sizeof(numbers[0]);
  size_t length = array_bytes / element_bytes;

  printf("length: %zu\n", length);
  printf("sizeof(numbers): %zu bytes\n", array_bytes);
  printf("sizeof(numbers[0]): %zu bytes\n", element_bytes);

  return 0;
}
