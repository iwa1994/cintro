// sample 3-1
#include <stdio.h>
#include <stdlib.h>

struct goods {
  char goods_ID[10];
  char goods_name[40];
  int goods_price;
};

int main(){
  int i = 0;
  struct goods product[100];
  while( scanf("%s %s %d", product[i].goods_ID, product[i].goods_name, &(product[i].goods_price)) !=EOF){
    i++;
  }
  for(i = 0; i < 4; i++){
    printf("商品コード: %s\n", product[i].goods_ID);
    printf("商品名: %s\n", product[i].goods_name);
    printf("値段: %d\n", product[i].goods_price);
  }
}
