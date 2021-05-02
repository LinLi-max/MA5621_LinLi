#include <stdio.h>

int fib(int i)
{
  if (i==0 || i==1) return 1;
  return fib(i-1)+fib(i-2); 
}

int main()
{
  printf("%d\n", fib(5));
  return 0;
}
