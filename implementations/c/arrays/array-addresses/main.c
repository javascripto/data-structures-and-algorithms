#include <stdio.h>

int main(void) {
  int numbers[5] = {10, 20, 30, 40, 50};

  for (size_t i = 0; i < 5; i++) {
    printf("&numbers[%zu] = %p\n", i, (void *)&numbers[i]);
  }

  return 0;
}
