// sample 3-1
#include <stdio.h>
#include <stdlib.h>





int strLength(char *str){
  int n=0;
  while( *str != '\0'){
    str++;
    n++;
  }

  return n;
  
}

int main(){

  
  char* str = (char *)malloc(sizeof(char)*100);//*strの初期化
  char *p;
  
   scanf("%s", str);
   p =  str;
 
  while(*p != '\0'){
    printf("%c\n", *p);
    p++;
  }
  printf("\n");
 
  while(p >= str){
    printf("%c", *p);
    p--;
  }

  printf("\n");

}
