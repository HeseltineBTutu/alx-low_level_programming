#include<ctype.h>
#include "main.h"
/**
 * _isupper- Entry point
 *
 * Description:  a function that checks for uppercase character.
 *
 * @c: letter being tested
 *
 * Return: 1 if c is uppercase
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c < 'Z')
	{
		return (1);
	}
	else
		return (0);
}
