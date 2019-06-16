#include <stdio.h>

int main(void)
{
    int mydt;

    mydt = 1234;
    printf("mydt=%d\n", mydt);
    printf("mydtのアドレス=%p\n", &mydt);

    return 0;
}

