#include <stdio.h>
#include <stdlib.h> /* for exit() */

void err_disp(char *msg);

int main(void)
{
    err_disp("最初のエラーです");
    err_disp("2番目のエラーです");
    err_disp("3番目のエラーです");
    err_disp("4番目のエラーです");

    return;
}

void err_disp(char *msg)
{
     static int err_ct = 0;

     printf("%s\n", msg);
     ++err_ct;
     if (err_ct >= 3) {
         printf("多数のエラーが発生しました。プログラムを終了します。\n");
         exit(1);
      }
}

