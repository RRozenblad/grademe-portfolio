int ft_check_digit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	isdigit(int c)
{
	if (ft_check_digit(c) == 1)
	{
		return (1);
	}
	return (0);
}
