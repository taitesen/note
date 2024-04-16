#include <stdio.h>

void convert(int number, int base) {
  printf("%d %d ", number, base);
  if (base == 2) {
    int binary[32];
    int length = 0;
    while (number > 0) {
      binary[length] = number % 2;
      length++;
      number /= 2;
    }
    for (int j = length - 1; j >= 0; j--) {
      printf("%d", binary[j]);
    }
  }

  if (base == 16) {
    char hexa[32];
    int i = 0;
    while (number > 0) {
      int rem = (number % 16);
      if (rem < 10)
        hexa[i] = '0' + rem;
      else
        hexa[i] = 'A' + (rem - 10);
      number /= 16;
      i++;
    }
    for (int j = i - 1; j >= 0; j--) {
      printf("%c", hexa[j]);
    }
  }
}

int main() {

  int input, base;
  do {
    printf("Enter a non-negative number and a base of 2 or 16: ");
    scanf("%d", &input);
    scanf("%d", &base);
  } while (!(input >= 0 && (base == 2 || base == 16)));

  convert(input, base);
  return 0;
}
