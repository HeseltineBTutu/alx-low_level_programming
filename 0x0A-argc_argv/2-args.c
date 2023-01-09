#include<stdio.h>
/**
 * main-  a program that prints all arguments it receives.
 *
 * @argc: argument count
 *
 * @argv:  An array of pointers to the arguments.
 *
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
