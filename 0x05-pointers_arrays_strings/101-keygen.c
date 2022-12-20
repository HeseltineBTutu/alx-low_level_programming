#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
/**main - Generate a random password
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	srand(time(NULL));
	
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		printf("%c", 'a' + rand() % 26);
	}
	printf("\n");
	return (0);
}
