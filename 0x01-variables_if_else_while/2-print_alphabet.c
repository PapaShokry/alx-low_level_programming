#include <stdio.h>
#include <unistd.h>

/**
 *
 *main - entry point 
 *Description: prints all alphapetics 
 *Return: 0
 */
int main(void)
{
        int ch;

        for (ch= 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
return (0);
}
