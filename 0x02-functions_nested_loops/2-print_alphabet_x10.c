#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int i;

for (i = 0; i < 10; i++)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
}
