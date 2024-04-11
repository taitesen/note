#include <stdio.h>

int count_digit(int input) {
  int counter = 0;
  while (input > 0) {
    input /= 10;
    counter += 1;
  }
  return counter;
}

int main() {
  int number;
  printf("Enter any digit of number: ");
  scanf("%d", &number);
  printf("The input is %d digit", count_digit(number));

  return 0;
}
