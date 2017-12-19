// sample 3-3
#include <stdio.h>
#include <stdlib.h>
typedef struct person {
	char name[30];
	char address[40];
	int birthyear;
} personData;

typedef struct company {
  personData ceo;
  personData employees[100];
} company;  


int main(){
  int i=0;
  int n;
  company c;

  //c.employees = (personData*)malloc(sizeof(personData)*100);
  
  printf("CEOの情報を入力してください\n");
  scanf("%s %s %d", c.ceo.name, c.ceo.address, &c.ceo.birthyear);
  printf("従業員の情報を入力してください\n");
  while(scanf("%s %s %d", c.employees[i].name, c.employees[i].address, &(c.employees[i].birthyear)) !=EOF){
    i++;
    if(i>=100){break;}  
  }
  
  printf("\n");
  printf("CEO %s", c.ceo.name);
  printf(" lives in %s\n", c.ceo.address);
  n=i;
  for(i = 0; i < n; i++){
    printf("Employees %d: %s, ", i, c.employees[i].name);
    printf("lives in %s\n", c.employees[i].address);
  }
}

