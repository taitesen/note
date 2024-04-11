/*
 * SETUP {
 * Ecological simulation of rabbit and wolves.
 * R = rabbit population
 * W = wolve population
 *
 * The day-by-day changes in R and W is expressed as:
 * R(tomorrow) = (1 + a).R(today) - c.R(today).W(today)
 * W(tomorrow) = (1 - b).W(today) + c.d.R(today).W(today)
 *
 * where a = 0.01 = fractional increase in R without a threat from wolves (1%)
 * b = 0.005 = fractional decrease in W without rabbit to eat
 * c = 0.00001 = likelihood that a wolf will encounter and eat a rabbit
 * d = 0.01 = fractional increase in W attributed to a devoured rabbit
 * }
 *
 * TASK {
 * Assume that initially there are 10000 rabbits and 1000 wolves. Write a
 * program to calculate populations of rabbits and wolves over a 1000-day
 * period. Have the program print the population every 25 days. See what happens
 * when you start with 500 wolves instead of 1000. Try starting with  2000
 * wolves too.
 * }
 */
#include <stdio.h>

#define A 0.01
#define B 0.005
#define C 0.00001
#define D 0.01

#define PRINT_INTERVAL 25

int main() {
  int R, W, days;
  printf("Enter a population for rabbit: ");
  scanf("%d", &R);
  printf("Enter a population for wolves: ");
  scanf("%d", &W);
  printf("Enter a total number of days: ");
  scanf("%d", &days);
  for (int i = 1; i <= days; i++) {
    if (i % PRINT_INTERVAL == 0) {
      printf("\nDay\tRabbits\tWolves\n");
      printf("%d\t%d\t%d\n", i, R, W);
    }
    double new_rabbit_population = (1 + A) * R - C * R * W;
    double new_wolves_population = (1 - B) * W + C * D * R * W;

    R = new_rabbit_population;
    W = new_wolves_population;
  }

  return 0;
}
