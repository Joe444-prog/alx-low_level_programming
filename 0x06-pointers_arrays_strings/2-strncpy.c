#include "main.h"

/**
 * _strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string. 
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
