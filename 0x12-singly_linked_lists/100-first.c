#include <stdio.h>
/**
 * print_before_main - function that prints a message before main is executed
 *
 * Description: This function is executed before the main function.
 * It uses the constructor attribute to specify that
 * it should be executed before main. The
 * printf function is used to print the message
 * "You're beat! and yet, you must allow,\n
 * I bore my house upon my back!\n".
 *
 * Return: Nothing is returned from this function.
 */
void print_before_main(void) __attribute__((constructor));

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
