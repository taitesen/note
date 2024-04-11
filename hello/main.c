#include <stdio.h>
#include <string.h>

void get_name(char *hming) {
  printf("Tu nge i hming: ");
  fgets(hming, 20, stdin);
  hming[strcspn(hming, "\n")] = 0;
}


void display_name(const char *hming) {
  char lastChar = hming[strlen(hming) - 1];
  if (lastChar == 'a') {
    printf("%s, chu hmeichhe hming a ni.", hming);
  } else if (lastChar == 'i') {
    printf("%s, chu mipa hming a ni.", hming);
  } else {
    printf("%s, chu mipa hming nge hmeichhe hming a hriat loh", hming);
  }
}

int main() {
  char name[23];
  get_name(name);
  display_name(name);

  return 0;
}
