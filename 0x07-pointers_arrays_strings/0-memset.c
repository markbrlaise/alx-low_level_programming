/**
 *_memset - function to fill memory with a constant byte
 *
 *@s - input pointer to char type to block of memory to be filled
 *
 *@b - input variable of char type to fill s
 *
 *@n - number of bytes to be filled
 *
 *return : pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 *deaclare unsigned int because a will 
	 *always be non-negative
	 */
	
	unsigned int i;

	for (i = 0; i < 95; i++)
		s[i] = b;

	return (s);
}
