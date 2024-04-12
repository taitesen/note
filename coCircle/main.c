#include <stdio.h>

void print_coordinate_of_circle(float radius) {
  int counter = 1;
  // since, the center of circle is at origin
  // i represents abscissa and j represents ordinate
  for (float i = -radius; i <= radius; i++) {
    for (float j = -radius; j <= radius; j++) {
      if ((i * i) + (j * j) == (radius * radius)) {
        printf("\nS.no\tx\ty\n");
        printf("%d\t%.2f\t%.2f\n", counter, i, j);
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
