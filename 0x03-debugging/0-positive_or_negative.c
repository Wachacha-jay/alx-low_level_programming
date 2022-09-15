#include "main.h"
#include <time.h>
#include <stdlib.h>
/**
 * main - prints if number is positive, zero or negative
 *
 * Return: 0 if succesful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is positive\n", n);
}
return (0);
}