// sample 1-7
#include <stdio.h>


int fact(int a){
  if(a == 0){
    return 1;
  }else{
    return a * fact(a-1);
  }
}

int main(){
    int n ;
    scanf("%d", &n);
    int res = fact(n);
    printf("the product of 1 to %d is %d\n", n, res);
}
