#include <stdio.h>

void disp_ary1(int nn[], int len);
void disp_ary2(int nn[]);

int main(void)
{
    int aa[5] = {100, 200, 300, 400, 500};
    int bb[6] = {111, 222, 333, 444, 555, -1};

    disp_ary1(aa, 5);
    disp_ary2(bb);

    return 0;
}

void disp_ary1(int nn[], int len)
{
     int i;

     for (i=0; i<len; i++) {
          
         printf("%d ", nn[i]);
     }
     printf("\n");
     
}

void disp_ary2(int nn[])
{
     int i = 0;

     while (nn[i] != -1) {
         printf("%d", nn[i]);
         ++i;
     }
     printf("\n");
}
