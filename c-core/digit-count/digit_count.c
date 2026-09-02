// Count the decimal digits of n, sign excluded, with zero written as one digit.
// Never negate n: INT_MIN has no positive counterpart inside an int.
int	digit_count(int n)
{
	(void)n;
	int exp;
	exp = 1;

	while (n / 10)
	{
		n = (n / 10);
		exp++;
		
	}
	return (exp);
}
