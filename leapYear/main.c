#include <stdio.h>

int main() {
  int year;
  printf("Enter any year: ");
  scanf("%d", &year);
  (year % 4 == 0 && year % 10 != 0) ? printf("It is a leap year")
                                    : printf("Is is not a leap year");

  return 0;
}
