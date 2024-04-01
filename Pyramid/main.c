#include <stdio.h>

void make_pyramid(int input);

int main() {
  int number_of_lines = 0;
  printf("How many lines do you want: ");
  scanf("%d", &number_of_lines);
  make_pyramid(number_of_lines);

  return 0;
}

void make_pyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= (input + (input - 1)); j++) {
      if (j <= (input - i) || j >= (input + i))
        printf("  ");
      else
        printf("* ");
    }
    printf("\n");
  }
}
