#include <stdio.h>

void make_RPyramid(int input);

int main() {
  int numer_of_lines = 0;
  printf("Enter a number of lines: ");
  scanf("%d", &numer_of_lines);
  make_RPyramid(numer_of_lines);

  return 0;
}

void make_RPyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= input; j++) {
      if (j <= (input - i))
        printf("  ");
      else
        printf("* ");
    }
    printf("\n");
  }
}
