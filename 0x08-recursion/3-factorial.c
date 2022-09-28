/**
 *factorial - function to return the factorial of a given number
 *
 *@n: given whose factorial is required
 *
 *Return: factorial or (-1) if n is less than 0
 *
 */

int factorial(int n)
{
	if (n > 0)
		return (n * (factorial(n - 1)));
	else if (n = 0)
		return (1);
	else
		return (-1);
}
