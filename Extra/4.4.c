#include <stdio.h>

int main(void){
  int m, n;
  printf("first number : \n");
  scanf("%d", &m);
  printf("second number : \n");
  scanf("%d", &n);
  if(m % n == 0){
    printf("m is a multiple of n");
  }
  return 0;
}
