#include <stdio.h>
#define size 25

int main() {
  int A[size] = {1,   2,   4,   7,   16,  22,  29,  37,  46,  56,  67,  79, 92,
                 106, 121, 137, 154, 172, 191, 211, 232, 254, 277, 301, 326};
  int D1[size];
  int D2[size];
  int D3[size];
  printf("A = { ");
  for (int i = 0; i < size; i++) {
    printf("%d, ", A[i]);
  }
  printf("}\n");

  printf("D1 = { ");
  for (int i = 0; i < size - 1; i++) {
    D1[i] = A[i + 1] - A[i];
    printf("%d, ", D1[i]);
  }
  printf("}\n");

  printf("D2 = { ");
  for (int i = 0; i < size - 2; i++) {
    D2[i] = D1[i + 1] - D1[i];
    printf("%d, ", D2[i]);
  }
  printf("}\n");

  printf("D3 = { ");
  for (int i = 0; i < size - 3; i++) {
    D3[i] = D2[i + 1] - D2[i];
    printf("%d, ", D3[i]);
  }
  printf("}\n");

  return 0;
}
