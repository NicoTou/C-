#include<stdio.h>

double ave(double x, double y);

int main(void)
{
    double a, b, avdt;

    a = 11.11;
    b = 33.33;
    avdt = ave(a, b);
    printf("a=%f b=%F 平均=%f\n", a, b, avdt);
    return 0;
}

double ave(double x, double y)
{
    double wk;
    
    wk = (x + y) /2.0;

    return wk;
}
 
