// sample 3-1
#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y){//x, yがポインター
  int x2;
  
  x2 = *x;
  printf("%d\n\n", x2);
  *x = *y;
  *y = x2;    
}  


int main(){

  
  int number1, number2;
  
  scanf("%d", &number1);
  scanf("%d", &number2);

  swap(&number1, &number2);

  printf("%d\n", number1);
  printf("%d\n", number2);
  

  printf("\n");

}
