#include <stdio.h>

int main()
{
    int a =23;

    printf("a=%o", a); //八進位輸出
    printf("\n");      // 跳行
    printf("a=%x", a); //十六進位(小寫)
    printf("\n");      // 跳行
    printf("a=%X", a); //十六進位(大寫)

    return 0;
}