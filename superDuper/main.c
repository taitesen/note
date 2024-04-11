#include <stdio.h>

#define PROFIT 500              // per sales
#define OPERATION_COST 10000    // per month
#define SALES_INIT 100          // sales per month
#define ADVERTISEMENT_INIT 1000 // per month

int main() {
  float sales = SALES_INIT;
  float advertisement = ADVERTISEMENT_INIT;
  float netProfit = (sales * PROFIT) - (OPERATION_COST + ADVERTISEMENT_INIT);
  printf("Initial number of Sales: %lf\n", sales);
  printf("Initial advertisement budget:  %lf\n", advertisement);
  printf("Initial net profit:  %lf\n", netProfit);
  while (1) {
    float newAdvertisement = advertisement * 2;
    float newSales = sales + (sales * 0.2);
    float newNetProfit =
        (newSales * PROFIT) - (OPERATION_COST + newAdvertisement);
    if (newNetProfit < netProfit) {
      printf("\nNumber of Super-Duper Sales: %lf\n", newSales);
      printf("Advertising budget:  %lf\n", newAdvertisement);
      printf("The net profit:  %lf\n", newNetProfit);
      break;
    } else {
      sales = newSales;
      advertisement = newAdvertisement;
      netProfit = newNetProfit;
    }
  }

  return 0;
}
