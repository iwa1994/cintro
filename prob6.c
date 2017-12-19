// Sample 1-6
#include <stdio.h>

int getSmallestFactor(int a){
  int i = 2;
  while(i*i <= a){
    if(a % i == 0){
       return i;
    }
    i++;
  }
  return 0;
}

int main(){
  int in, fact, quotient, count;
  printf("Type in a number: ");
  scanf("%d", &in);
  if(in == 1){ printf("1を素因数分解すると１になります。\n"); return 0;}
  count = 0;
  quotient = in;
  fact = getSmallestFactor(quotient);
  printf("%dを因数分解すると、", in);
  if(fact ==0){ printf("%dになります。\n", quotient); return 0;}
  while(fact > 0){
    quotient = quotient / fact;
    if(count == 0){
      printf("%d", fact);
    }else{
      printf("*%d", fact);
    }
    count++;
    fact = getSmallestFactor(quotient);
  }
  printf("*%dになります。\n", quotient);
  return 0;
}


