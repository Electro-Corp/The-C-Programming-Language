#include <stdio.h>
int main() {
  int c = 5;
  int *p = &c;
  printf("%d\n",c);
  //math
  *p = *p + 5;
  printf("%d\n",c);
}