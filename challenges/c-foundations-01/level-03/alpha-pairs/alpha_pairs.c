#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char c;
	int i;
	c = 'a';
	i = 0;
	
	while (i != 13)
	{
		i++;
		ft_putchar(c);
		ft_putchar(c);
		c -= 32;
		c++;
		ft_putchar(c);
		ft_putchar(c);
		c += 32;
		c++;
	}
	ft_putchar('\n');
	return (0);
}
