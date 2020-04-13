#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main() 
{
  int a = 10;
  int b = 20;
  int sum = add(a, b);
  int dif = sub(a, b);
  printf("%d\n",sum);
 printf("%d\n",dif);
}

int sub(int a, int b)
 {
   return (a - b);
}

 int add(int a, int b) 
{
    return (a+b);
}
