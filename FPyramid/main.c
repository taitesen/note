#include <stdio.h>

void make_FPyramid(int input);

int main() {
  int number_of_lines = 0;
  printf("How many lines do you want: ");
  scanf("%d", &number_of_lines);
  make_FPyramid(number_of_lines);

  return 0;
}

void make_FPyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= input; j++) {
      if (j <= (input - i) + 1)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
