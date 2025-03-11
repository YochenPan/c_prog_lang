#include <stdio.h>

int main()
{
    int a = 23;
    printf("a=%d %f", a, a);

    float b =45;
    printf("a=%d %f", b, b);

    //錯誤輸出範例
    printf("a=%f b=%d\n", a, b);
    
    return 0;
}