#include <stdio.h>
#include <ctype.h> /* for toupper() */

int main(void)
{
   int ch;

   ch = getchar();
   while (ch != EOF) {
       ch = toupper(ch);
       putchar(ch);
       ch = getchar();
   }

   return 0;
}

