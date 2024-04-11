#include <stdio.h>
void check_even_or_odd(int input) {
  if (input % 2 == 0)
    printf("%d was an Even Number\n", input);
  else
    printf("%d was an Odd Number\n", input);
  printf("################################");
}

int main() {
  int exit_counter = 0;
  while (exit_counter == 0) {
    int exit_counter_helper;
    printf("\n<---- Choose an option ---->\n");
    printf("1--> Enter a number to check if it is even or odd\n");
    printf("2--> Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &exit_counter_helper);
    if (exit_counter_helper == 1) {
      int number;
      printf("Enter any number: ");
      scanf("%d", &number);
      check_even_or_odd(number);
    } else if (exit_counter_helper == 2) {
      printf("exiting, please wait...");
      exit_counter = 1;
    } else {
      printf("\n--------- invalid options alert -----------\n");
      printf("please choose the correct options carefully\n");
      printf("-------------------------------------------\n");
    }
    continue;
  }

  return 0;
}
