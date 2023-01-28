#include "main.h"
/**
 * puts_half- print half string
 *
 * Description: function that prints half of a string.
 *
 * @str: print string
 *
 * Return:does not return anything
 */
void puts_half(char *str)
{
	int i = 0, y;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	if (i % 2 == 1)
		y = i / 2;
	else
		y = (i - 1) / 2;
	for (y++; y < i; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
