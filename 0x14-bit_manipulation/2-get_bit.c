#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: number to search
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 'c')
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
