#include "main.h"

/**
 * * _strlen - checks the length of a string
 *  * @s: input
 *   * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}            
