#include "main.h"

/**
 * main - Entry to the program
 * Description: prints a word into output
 * Return:0
 */

int main(void)
{
char word[] = "_putchar";
int i = 0;

while (word[i] != '\0')
{
char c = word[i];
_putchar(c);
i++;
}
_putchar('\n');
return (0);
}
