#include<stdio.h>

int main(){
  static int a[] = { 0, 1, 2, 3, 4 };
  static int *p[] = { a, a + 1, a + 2, a + 3, a + 4 };
  printf("%p %p %d\n", p, *p, *(*p));

  for(int i = 0; i < 5; i++){
    printf("Address of a[%d] = %p holds ---> %d\n", i, (a + i), *(a + i));
  }

  for(int i = 0; i < 5; i++){
    printf("Address of p[%d] = %p holds ---> %p which dereferences to --> %d\n", i, (p + i), *(p + i), *(*(p + i)));
  }
  
return 0;
}
