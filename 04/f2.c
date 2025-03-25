#include <stdio.h>

int main()
{
  int a , b;

  printf("Please input a,b:");
  scanf("%d %d",&a, &b  );

  printf("a=%d, b=%d\n", a, b);

  printf("a > b :%d\n", a > b);
  printf("a < b :%d\n", a < b);
  printf("a >= b :%d\n", a >= b);
  printf("a <= b :%d\n", a <= b);
  printf("a == b :%d\n", a == b);
  printf("a != b :%d\n", a != b);

  return 0;
}