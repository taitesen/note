#include <stdio.h>
int reverse(int source) {
  int number = 0;
  while (source != 0) {
    number = (number * 10) + (source % 10);
    source /= 10;
  }
  return number;
}
int main() {
  int input;
  printf("Enter any number: ");
  scanf("%d", &input);
  int number = reverse(input);
  printf("before: %d\n", number);
  while (number != 0) {
    int counter = number % 10;
    switch (counter) {
    case 0:
      printf("zero ");
      break;
    case 1:
      printf("one ");
      break;
    case 2:
      printf("two ");
      break;
    case 3:
      printf("tree ");
      break;
    case 4:
      printf("four ");
      break;
    case 5:
      printf("five ");
      break;
    case 6:
      printf("six ");
      break;
    case 7:
      printf("seven ");
      break;
    case 8:
      printf("eight ");
      break;
    case 9:
      printf("nine ");
      break;
    }
    number /= 10;
  }

  return 0;
}
