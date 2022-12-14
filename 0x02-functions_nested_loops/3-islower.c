#include<ctype.h>
#include "main.h"
/**
 * _islower- Entry point
 *
 * Description:a function that checks for lowercase character.
 *
 * @c:letter being tested
 *
 * Return: 1 if c is lowercase
 *
 */
int _islower(int c)
{
	if (c >= 97 && c < 122)
	{
		return (1);
	}
	else
		return (0);
}
