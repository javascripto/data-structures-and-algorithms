#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t length = 5;

  // allocate memory for an array of integers of the specified length
  // this is not an array declaration, but a pointer to the first element of the allocated memory
  int *numbers = malloc(length * sizeof(numbers[0]));

  // check if malloc succeeded in allocating memory
  if (numbers == NULL) {
    printf("Failed to allocate memory\n");
    return 1;
  }

  // initialize the array with values from 10 to 50 in increments of 10
  for (size_t index = 0; index < length; index++) {
    numbers[index] = (int)((index + 1) * 10);
  }

  for (size_t index = 0; index < length; index++) {
    printf(
      "numbers[%zu] = %d | address = %p\n",
      index,
      numbers[index],
      (void *)&numbers[index]
    );
  }

  // This will print the size of the pointer, not the array
  printf("sizeof(numbers): %zu bytes\n", sizeof(numbers));
  printf("sizeof(numbers[0]): %zu bytes\n", sizeof(numbers[0]));

  // free the allocated memory to avoid memory leaks
  free(numbers);

  return 0;
}
