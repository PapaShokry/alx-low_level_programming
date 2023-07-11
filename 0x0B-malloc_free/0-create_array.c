#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(size * sizeof(char));
	
	if (array == NULL)
		return (NULL);
	else if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
