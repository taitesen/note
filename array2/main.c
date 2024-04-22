#include <stdio.h>
#define SIZE 50

int main() {
  int arr[SIZE] = {
      23, 16, 3, 10, 14, 9,  10, 16, 20, 2,  17, 17, 2,  9,  25, 14, 2,
      12, 24, 3, 19, 25, 25, 10, 9,  18, 18, 12, 25, 10, 2,  6,  25, 15,
      8,  8,  9, 24, 18, 22, 17, 18, 24, 9,  10, 18, 24, 20, 11, 19,
  };
  int size = 25;
  int frequency[25 + 1] = {0};
  for (int i = 0; i < SIZE; i++) {
    frequency[arr[i]]++;
  }
  for (int i = 1; i <= 25; i++) {
    printf("%d occurs %d times\n", i, frequency[i]);
  }
  return 0;
}
