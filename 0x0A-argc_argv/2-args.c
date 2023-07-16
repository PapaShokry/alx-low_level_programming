#include <stdio.h>

/**
 * main - function prints all arguemtns passed with /n after each arguemnt
 * @argc: number of arguments
 * @argv: array of passed arguemnts
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
