#include <stdio.h>

int main()
{
    float x;
    printf("Please input x:");
    scanf("%f" , &x);
    float y = -2 * x * x + 5 * x -(float)8/(float)5 ;

    printf("y=%f\n",y);

    return 0;

}