#include <stdio.h>
/**
 * main - entry point
 *
 * print alphabet in lower case in reverse
 *
 * Return; always returns 0
 */
int main(void)
{
char a;
for (a = 'z'; a >= 'z' ; a--)
putchar(a);
putchar('\n');
return (0);
}
