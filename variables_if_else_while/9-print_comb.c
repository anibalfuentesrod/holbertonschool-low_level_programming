#include <stdio.h>
/**
 * main - making the nine
 *
 * Return: 0
**/
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
	putchar(num + '0');
	if (num <= 8)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
