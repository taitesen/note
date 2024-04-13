#include <stdio.h>
void answer(int range) {
  for (int i = 1; i <= range; i++) {
    for (int j = 1; j <= range; j++) {
      for (int k = 1; k <= range; k++) {
        for (int l = 1; l <= range; l++) {
          if ((i + j + k == l) && (i < j) && (j < k) && (k < l)) {
            printf("%d + %d + %d = %d\n", i, j, k, l);
          }
        }
      }
    }
  }
}

int main() {
  int input;
  printf("Enter any range: ");
  scanf("%d", &input);
  answer(input);
  return 0;
}
