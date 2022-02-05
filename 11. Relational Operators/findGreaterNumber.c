#include <stdio.h> 

int main(void) { 
 
    int a, b;
    a = 20; b = 20;

    if(a > b){
      printf("%d is greater than %d \n", a, b);
      printf("inside if");
    } 
    else if(a < b) {
      printf("%d is greater than %d \n", b, a);
      printf("in else");
    } 
    else {
      printf("%d is equal to %d \n", a, b);
    }
    
  return 0;
}
