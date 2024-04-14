#include <stdio.h>
void generatePerfectSquares() {
  for (int i = 4; i < 10;
       i++) { // since the first two squared could only be between 4^2 to 9^2
    int squaredFirstDigit = (i * i);
    if ((squaredFirstDigit > 9) &&
        (squaredFirstDigit < 100)) { // it could only be double digit
      for (int j = 4; j < 10; j++) { // same as the first two squared number
        int squaredSecondDigit = (j * j);
        if ((squaredSecondDigit > 9) &&
            (squaredSecondDigit < 100)) { // it could only be double digit
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
