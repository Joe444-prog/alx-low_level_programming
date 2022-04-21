#include "main.h"

/**
 * swap_int - swap the valur of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: Nothing
 */
  
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}                        
