#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
  int a = 10;
  int b = 20;

  int sum = add(a, b);
  int dif = sub(a, b);
  int prod = mul(a, b);
  int quotient = div(a, b);

  printf("Sum is %d\n", sum);
  printf("Difference is %d\n", dif);
  printf("Product is %d\n", prod);
  printf("Quotient is %d\n", quotient);
}

int sub(int a, int b)
{
  return (a - b);
}

int add(int a, int b)
{
  return (a + b);
}

int mul(int a, int b)
{
  return a * b;
}

int div(int a, int b)
{
  return a / b;
}