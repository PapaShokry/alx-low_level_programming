#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++);
	for (j = 0; s2[j] != '\0'; j++);

	s3 = malloc(sizeof(char) * (i + j + 1));

	if (s3 == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		s3[k] = s1[k];
	for (l = 0; l < j; l++)
		s3[k + l] = s2[l];

	s3[k + l] = '\0';

	return (s3);
}
