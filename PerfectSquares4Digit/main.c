#include <stdio.h>
void generatePerfectSquares() {
  // since the first two squared could only be between 4^2 to 9^2
  for (int i = 4; i < 10; i++) {
    int squaredFirstDigit = (i * i);
    // it could only be double digit
    if ((squaredFirstDigit > 9) && (squaredFirstDigit < 100)) {
      // same as the first two squared number
      for (int j = 4; j < 10; j++) {
        int squaredSecondDigit = (j * j);
        // it could only be double digit
        if ((squaredSecondDigit > 9) && (squaredSecondDigit < 100)) {
          int fourDigitNumber = (squaredFirstDigit * 100) + squaredSecondDigit;
          for (int k = 31; k < 99; k++) { // range for 4-digit numbers
            int range_helper = (k * k);
            if (fourDigitNumber == range_helper) {
              printf("Ans: %d\n", fourDigitNumber);
            }
          }
        }
      }
    }
  }
}

int main() {
  generatePerfectSquares();
  return 0;
}
