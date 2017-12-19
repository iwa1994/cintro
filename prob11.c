//prob11

#include <stdio.h>
#include <stdlib.h>
int main(){

  char* p = (char *)malloc(sizeof(char)*5);
  char* str = (char *)malloc(sizeof(char)*3);
  int i;
  for (i = 0; i < 5; i++){
    scanf("%s", str);
    *p = *str;
    p++;
  }
  p-=5;
  for (i = 0; i < 5; i++){
    printf("値:%c  アドレス:%p\n", *p ,p);
    p++;
  }
}
