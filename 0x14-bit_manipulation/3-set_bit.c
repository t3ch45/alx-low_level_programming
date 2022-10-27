#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: pointer to the number to change
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 'c')
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
