#include <stdio.h>
void swap(int* px, int* py){
  int temp = *px;
  *px = *py;
  *py = temp;
}
void badswap(int x, int y){
  int temp = x;
  x = y;
  y = temp; 
}
int main(){
  int a = 6;
  int b = 2;
  printf("Bad swap program: \n");
  badswap(a,b);
  printf("Value of B(it should be 6): %d\n",b);
  printf("Didnt work. Lets try the version with pointers: (Good swap program)\n");
  swap(&a,&b);
  printf("Value of B(it should be 6): %d\n",b);
  printf("Nice.\n");
}