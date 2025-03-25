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

  printf("a > 1 && b < 3 :%d\n",a > 1 && b < 3);
  printf("a > 1 || b < 3 :%d\n",a > 1 || b < 3);
 
  printf("a > 1 && a < 3 :%d\n",a > 1 && a < 3);
  printf("b > 1 && b < 3 :%d\n",b > 1 && b < 3);

  printf("a > 1 || a < 3 :%d\n",a > 1 || a < 3);
  printf("b > 1 || b < 3 :%d\n",b > 1 || b < 3);
  
  return 0;
}