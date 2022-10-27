#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number
 * @index:  is the index, starting from 0 of the bit you want to set
 *
 * Return:  1 on success, -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 'c')
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
