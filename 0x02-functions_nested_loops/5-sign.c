#include "main.h"

/**
 * print_sign - entry to function
 * @c: integer recived as number
 * Descrption: prints a sign of number next to it
 * Return: string 0
 */

void print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
