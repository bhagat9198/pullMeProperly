#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main() {
  int a = 10;
  int b = 20;
  int sum = add(a, b);
  int subtract = sub(a, b);
  printf("%d\n",sum);
}

int sub(int a, int b) {
	return (a - b);
}

 int add(int a, int b) {
  int result = a + b;
  return result;
}
