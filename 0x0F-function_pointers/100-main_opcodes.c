#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 or appropriate exit status
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	main_ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", main_ptr[i]);
	}
	printf("\n");
	return (0);
}
