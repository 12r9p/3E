#include <stdio.h>

float BMI(float weight, float height);

int main(void)
{
  float weight, height;

  printf("Input weight [kg]: ");
  scanf("%f", &weight);
  printf("Input height [cm]: ");
  scanf("%f", &height);

  printf("BMI is %f.\n", BMI(weight, height));

  return 0;
}

float BMI(float w, float h)
{
  return w * 10000.0 / h / h;
}