#include "main.h"

/**
 * _isalpha - checks if character is alpha
 * Description: a function that accepts int of characters and checks if it is alpha characters
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
        for (int i = 65; i <= 122; i++)
        {
                if (i == c)
                {
                        return (1);
                }
        }
        return (0);
}
