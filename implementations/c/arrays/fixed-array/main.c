#include <stdio.h>

int main(void) {
  // Fixed-size array with 5 integers stored in contiguous memory
  int numbers[5] = {10, 20, 30, 40, 50};

  // Calculate the length of the array by dividing the total size
  // of the array (bytes) by the size of a single element (bytes)
  size_t length = sizeof(numbers) / sizeof(numbers[0]);

  printf("Array length: %zu\n", length);
  // In many expressions, the array name "numbers" decays to a pointer
  // to the first element, which is &numbers[0].
  // %p prints a memory address.
  // The cast to void * is the expected form when using %p with printf.
  printf("Array base address: %p\n", (void *)numbers);

  for (size_t index = 0; index < length; index++) {
    printf(
      "numbers[%zu] = %d | address = %p\n",
      index,
      numbers[index],
      (void *)&numbers[index] // Memory address of the current element
    );
  }

  return 0;
}
