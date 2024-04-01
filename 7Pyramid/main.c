
#include <stdio.h>

void make_7Pyramid(int input);

int main() {
  int number_of_lines = 0;
  printf("How many lines do you want: ");
  scanf("%d", &number_of_lines);
  make_7Pyramid(number_of_lines);

  return 0;
}

void make_7Pyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= input; j++) {
      if (j >= i)
        printf("* ");
      else
        printf("  ");
    }
    printf("\n");
  }
}
