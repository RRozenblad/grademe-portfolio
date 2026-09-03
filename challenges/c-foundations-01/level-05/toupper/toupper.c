int	toupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c);
	}
	else if (c >= 'a' && c <= 'z')
	{ 
		c -= 32;
	}
	return (c);
}

