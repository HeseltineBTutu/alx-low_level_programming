#include<stdio.h>
/**
 * main- a program that prints the number of arguments passed into it.
 *
 * @argc: argument count
 *
 * @argv: An array of pointers to the arguments.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1)
		;
	return (0);
}
