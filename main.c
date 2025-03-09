// main.c
//teste
#include "foo.h"

int foo(int b) {
  if (b > 2)
    return 0;
  return 1;
}

int main(void) {
  int a = foo(12);
  printf("a = %d\n", a);
  return 0;
}
