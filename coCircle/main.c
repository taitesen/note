#include <stdio.h>

void print_coordinate_of_circle(int radius) {
  int counter = 1;
  for (int i = 0; i <= (radius * radius); i++) {
    for (int j = 0; j <= (radius * radius); j++) {
      if ((i * i) + (j * j) == (radius * radius)) {
        printf("\nS.no\tx\ty\n");
        printf("%d\t%d\t%d\n", counter, i, j);
        counter++;
      }
    }
  }
}

int main() {
  int input = 0;
  printf("Enter a radius: ");
  scanf("%d", &input);
  print_coordinate_of_circle(input);
  return 0;
}
