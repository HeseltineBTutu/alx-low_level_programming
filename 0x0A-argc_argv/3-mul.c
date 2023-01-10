#include<stdio.h>
#include<stdlib.h>
/**
 * n
 * main-  a program that multiplies two numbers.
 *
 * @argc: count
 *
 * @argv: vector
 *
 * Return: 1 ifdoes not receive two arguments.
 */
int main(int argc, char *argv[])
{
	if(argc !=2)
	{
		printf("Error\n");

		return (1);
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
