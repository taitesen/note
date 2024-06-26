#include <stdio.h>

int main() {
  printf("What do you want to print: ");
  static char *msg[7];
  static char arr[7];
  fgets(arr, sizeof(arr), stdin);
  *msg = arr;
  puts(*msg);

  for (int i = 0; i < 7; i++) {
    printf("arr[%d] --> Address: %p, Value: %c\n", i, (arr + i), *(arr + i));
  }

  for (int i = 0; i < 7; i++) {
    printf("msg[%d] --> Address: %p, Value: %p\n", i, (msg + i), *(msg + i));
  }

  return 0;
}
