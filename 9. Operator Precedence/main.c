#include <stdio.h> 

int main(void) { 
  // - Operators in expressions contained within pairs of parentheses are evaluated first.
  // - Multiplication, division and remainder operations are applied next. 
  // - Addition and subtraction operations are evaluated next. 
  // - The assignment operator (=) is evaluated last.

  int a, b, c, d, ans;
  a = 5; b = 10; c = 10; d = 5;
  // 5 * 10 - 10 / 5 
  // 50 - 2
  ans = a * (b - c) / d;

  printf("Answer: %d \n", ans);
  return 0;
}