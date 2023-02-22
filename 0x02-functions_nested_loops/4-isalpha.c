#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * Description: a function that accepts int of char and checks if it is alpha char
 * @c: the integer value it receives
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
        int i;
        for (i = 65; i <= 122; i++)
        {
                if (i == c)
                {       
                        return (1);
                }
        }
        return (0);
}
