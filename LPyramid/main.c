#include <stdio.h>

void make_LPyramid(int input);

int main() {
  int number_of_lines = 0;
  printf("Enter the number of lines: ");
  scanf("%d", &number_of_lines);
  make_LPyramid(number_of_lines);

  return 0;
}

void make_LPyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}
