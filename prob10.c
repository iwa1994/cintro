//prob10

#include <stdio.h>
#include <stdlib.h>
int main(){
  printf("整数値を5個入力してください。");
  printf("一つ入力するごとに改行を押してください。\n");


  int* p = (int *)malloc(sizeof(int)*5);

  
  int i;
  for (i = 0; i < 5; i++){
    scanf("%d", p);
    p++;
  }
  p-=5;
  for (i = 0; i < 5; i++){
    printf("値:%d  アドレス:%p\n", *p ,p);
    p++;
  }
}
