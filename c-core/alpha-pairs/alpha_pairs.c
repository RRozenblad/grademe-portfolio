#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	char c = 'a';
	while (c < 'z')
	{
		ft_putchar(c);
		ft_putchar(c);
		c++;
		c = c - 32;
		ft_putchar(c);
		ft_putchar(c);
		c++;
		c = c + 32;
	}
	ft_putchar('\n');
	return (0);
}
