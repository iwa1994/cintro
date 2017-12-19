// Sample 1-3
#include <stdio.h>
#include <math.h>
int main(){
  int number1;
  int number2;
  printf("Put an integer\n");
  scanf("%d", &number1);
  printf("Put another integer?\n");
  scanf("%d", &number2);
  printf("%d + %d = %d\n", number1, number2, number1+number2);
}
