#include <stdio.h>

int main(void)
{
    int a, b, nn;
    double d1, d2, dd;

    a = 100;
    b = 30;
    nn = a + b; printf("a+b=%d\n", nn);
    nn = a - b; printf("a-b=%d\n", nn);
    nn = a * b; printf("a/b=%d\n", nn);
    nn = a % b; printf("a%%b=%d\n", nn);

    d1 = 90.0;
    d2 = 40.0;
    dd = d1 / d2; printf("d1/d2=%f\n", dd);

    return 0;

}

