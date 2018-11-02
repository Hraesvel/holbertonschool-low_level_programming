/**
 * bin_len - return length of the binary rep of a number.
 * @n: number to count the binary length
 *
 * Return: length.
 */
unsigned int bin_len(unsigned long int n)
{
	unsigned int i;

	for (i = 0; n != 0; ++i)
		n >>= 1;
	return (i);
}

/**
 * clear_bit- function that sets the value of a bit to 0 at a given index.
 * @n: pointer to a number
 * @index: where to set the bit to 0
 *
 * Return: 1 (Sucess) else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (bin_len(*n) - 1 < index)
		return (-1);

	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (0);
	}
	return (-1);
}
