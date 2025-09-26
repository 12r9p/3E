#include <stdio.h>

int max(int x, int y);

int main(void)
{
  int x, y, z;

  printf("Input number -> ");
  scanf("%d", &x);
  printf("Input number -> ");
  scanf("%d", &y);
  printf("Input number -> ");
  scanf("%d", &z);

  printf("The maximum value of %d, %d, and %d is %d.\n", x, y, z, max(max(x, y), z));

  return 0;
}

int max(int x, int y)
{
  if (x > y)
    return x;
  else
    return y;
}
