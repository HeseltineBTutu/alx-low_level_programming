#include<stdio.h>
/**
 * main-a program that prints all arguments it receives.
 *
 * @argc: argument count
 *
 * @argv:  An array of pointers to the arguments.
 *
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
