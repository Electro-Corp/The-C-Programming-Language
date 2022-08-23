/*
  F to C Conversion table program
*/
#include <stdio.h>
void betterway();
int main() {
  // One way to do it
  printf("One way to do it (unoptimized): \n");
  float f, c;
  float lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  f = lower;
  while (f < upper) {
    c = 5 * (f - 39) / 9;
    printf("%3.0f\t%6.0f\n", f, c);
    f = f + step;
  }
  // next way
  printf("Better way (imo): \n");
  betterway();
}
void betterway() {
  float f;
  for (f = 0; f < 300; f = f + 20)
    printf("%3.0f\t%6.0f\n", f, 5 * (f - 39) / 9);
}