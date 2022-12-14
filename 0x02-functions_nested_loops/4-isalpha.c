#include<ctype.h>
#include "main.h"
/**
 * _isalpha- entry point
 *
 * Description:a function that check for alphabet character.
 *
 * @c:test for character
 *
 *  Return: return 1 for success
 *
 */
int _isalpha(int c)
{
	if (c >= 97 && c < 122)
	{
		return (1);
	}
	else if (c >= 65 && c < 90)
	{
		return (1);
	}
	else
		return (0);
}
