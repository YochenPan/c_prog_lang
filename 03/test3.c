#include <stdio.h>

int main()
{
    float a = 299792458.0; //光速單位:公尺/s

    printf("a =%f\n, a");  //浮點數一般輸出
    printf("a =%e\n, a");  //浮點數科學號輸出
    printf("a =%E\n, a");  //浮點數科學號輸出
    
    //--------------------------------------
    printf("----------------------------\n");
    float b = 6.756;
    printf("b=%5.2f",b);

    int c= 911;
    printf("c=%5d\n", c);

    printf("----------------------------\n");
    printf("b=%5.2f\n",c);
    printf("c=%05d\n",c);

    printf("----------------------------\n");
    printf("b=%10d",125);
    printf("b=%10d",85);
    printf("b=%10d",150);
    
    return 0;
}