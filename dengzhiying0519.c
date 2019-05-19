#include <stdio.h>
#include <stdlib.h>   /* for atoi() */

int getint(char msg[]);

int main(void)
{
    int n;

    n = getint("数値を入力してください: ");
    printf("入力した数値=%d\n", n);

    return 0;
}

int getint(char msg[]) /*安全に整数を取得する　*/
{
    char ss[80];

    printf("%s", msg); /*メッセージ表示　　　　*/
    gets(ss);          /*文字列取得　　　　　　*/

    return atoi(ss);   /*数値変換して戻す　　　*/
}

