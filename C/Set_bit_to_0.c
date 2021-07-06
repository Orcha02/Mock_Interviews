#include <stdio.h>
/*
 * main - Set bit to 0
 *
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask = mask << index;
	*n = (~mask & *n); /*negate mask, then I apply &*/
	return (1);
}
