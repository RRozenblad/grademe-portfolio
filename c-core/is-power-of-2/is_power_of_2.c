int is_power_of_2(unsigned int n)
{
	if (n < 1)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	while (n % 2 == 0)
	{
		if (n == 2)
		{
			return (1);
		}
		n /= 2;
	}
	return (0);
}
