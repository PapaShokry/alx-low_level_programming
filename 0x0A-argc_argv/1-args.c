#include <stdio.h>
/**
 * main - main function to print number of passed arguments
 * @argc: number of arguments
 * @argv: arguments
 * Returns: number of passed arguments
 */

int main(int argc, char __attribute__((unused)) * argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
