#include <stdio.h>
void answer() {
  for (int i = 1; i < 10; i++) {
    int firstDigit = i;
    int secondDigit = i;
    int FirstTwoDigit = (firstDigit * 10) + secondDigit;
    for (int j = 0; j < 10; j++) {
      int thirdDigit = j;
      int fourthDigit = j;
      int LastTwoDigit = (thirdDigit * 10) + fourthDigit;
      int FourDigit = (FirstTwoDigit * 100) + LastTwoDigit;
      for (int range = 31; range < 99; range++) {
        int range_helper = range * range;
        if (FourDigit == range_helper) {
          printf("Ans: %d", FourDigit);
        }
      }
    }
  }
}

int main() {
  answer();
  return 0;
}
