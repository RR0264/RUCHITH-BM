//Write a program to add two user input numbers using one function.
#include <stdio.h>
int main()
{
  int a, b, x;

  printf("Enter Number 1\n");
  scanf("%d", &a);
  printf("Enter Number 2\n");
  scanf("%d", &b);

  x = a + b;

  printf("Sum of %d and %d  is = %d\n", a, b, x);

  return 0;
}
