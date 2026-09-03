int ft_checknum(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return(0);
}

int	isalnum(int c)
{
	if (ft_checknum(c) == 1)
	{
		return (1);
	}
	return (0);
}