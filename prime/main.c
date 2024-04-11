#include <stdio.h>

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int i = 2;
  while (i < num) {
    if (num % i == 0) {
      printf("Not prime number\n");
      break;
    }
    i++;
    if (num == i) {
      printf("Prime number\n");
    }
  }

  return 0;
}
