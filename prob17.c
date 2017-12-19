// sample 3-3
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	char name[50];
	char address[80];
	struct node* next;
}node;

int main(){
  
  struct node *a, *head;
  head = (node*)malloc(sizeof(node));
  a = head;

  while(scanf("%s %s\n", a->name, a->address)!= EOF){


    a->next = (node*)malloc(sizeof(node));
    //aのカーソルをすすめる
    a = a->next;
    
  }

  a = head;
  while(strcmp(a->name, "") != 0){

    printf("name: %s, address: %s\n", a->name, a->address);
    a = a->next;
    
  }	   
}

