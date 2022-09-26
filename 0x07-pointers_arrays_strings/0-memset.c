/**
 *_memset - function to fill memory with a constant byte
 *
 *@s: input pointer to char type to block of memory to be filled
 *
 *@b: input variable of char type to fill s
 *
 *@n: number of bytes to be filled
 *
 *Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
