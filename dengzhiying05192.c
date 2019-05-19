#include <stdio.h>

int max_of_array(int n[], int len);

int main(void)
{
    int dt[6] = {50, 20, 80, 30, 10, 40};

    printf("最大値=%d\n", max_of_array(dt, 6));
    
    return 0;
}

int max_of_array(int n[], int len)
{
    int i, ans;

    ans = n[0];
    for (i=1; i<len; i++) {
        if (ans < n[i]) ans = n[i];
    }
    return ans;
}


