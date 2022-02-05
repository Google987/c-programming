#include <stdio.h> 

int main(void) { 
  float a, b, answer;
  a = 5; 
  b = 2;
  answer = a + b;
  printf("a + b = %f \n", answer);

  answer = a - b;
  printf("a - b = %f \n", answer);

  answer = a * b;
  printf("a * b = %f \n", answer);

  answer = a / b;
  printf("a / b = %f \n", answer);

  return 0;
}