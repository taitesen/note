#include <stdio.h>

void make_7Pyramid(int input);
void make_FPyramid(int input);
void make_LPyramid(int input);
void make_RPyramid(int input);
void make_pyramid(int input);

int main() {
  int choice = 0;
  int input = 0;
  int number_of_lines = 0;
  printf("1.\n");
  make_7Pyramid(4);
  printf("\n");
  printf("2.\n");
  make_FPyramid(4);
  printf("\n");
  printf("3.\n");
  make_LPyramid(4);
  printf("\n");
  printf("4.\n");
  make_RPyramid(4);
  printf("\n");
  printf("5.\n");
  make_pyramid(4);
  printf("\n");
  printf("Which type of Pyramid do you want?\n");
  scanf("%d", &choice);
  printf("How many lines do you want: ");
  scanf("%d", &number_of_lines);
  switch (choice) {
  case 1:
    make_7Pyramid(number_of_lines);
    break;
  case 2:
    make_FPyramid(number_of_lines);
    break;
  case 3:
    make_LPyramid(number_of_lines);
    break;
  case 4:
    make_RPyramid(number_of_lines);
    break;
  case 5:
    make_pyramid(number_of_lines);
    break;
  default:
    printf("-----------------------\n");
    printf("|       ERROR         |\n");
    printf("-----------------------\n");
  }

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

void make_LPyramid(int input) {
  for (int i = 1; i <= input; i++) {
    for (int j = 1; j <= i; j++) {
      printf("* ");
    }
    printf("\n");
  }
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
