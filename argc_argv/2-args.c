#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * main - the name of function
 *
 * @argc: the argument count
 * @argv: argument vector
 * Return: 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
