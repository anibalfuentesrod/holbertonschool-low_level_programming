#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - ERA ESTOOOOOOOO JAJAJA
 *
 *@n:the variable.
 *
 * Return: 0
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
printf("%d, ", n--);
printf("%d\n", n);
}
else
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
}
