#include <stdio.h>

int main(void){

  int a, b, c;

  printf("input a: ");
  scanf("%d", &a);
  printf("input b: ");
  scanf("%d", &b);
  printf("input c: ");
  scanf("%d", &c);

  if (a == b && b == c) {
    printf("a=b=c\n");
  } else {
    printf("a, b, and c are not equal.\n");
  }

  return 0;

}