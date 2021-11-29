#include <stdio.h> 

int main(void) { 
  int x; 
  x = 20; 

  char c = 'a'; 

  double d = 1.5;

  float f = 1.55555;

  /*
    %d (int), %c (char), %f (float, double) 
    These are format specifiers
  */
  
  printf("value of x: %d\n", x);
  printf("value of c: %c\n", c);
  printf("value of d: %f\n", d);
  printf("value of f: %f\n", f);

  printf("hello world\n");

  return 0;
}