#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc > 9)
	{
	ft_putchar(argc + '0' - 10);
	ft_putchar(argc + '0' - 11);
	}
	else 
	{
	ft_putchar(argc + '0' - 1);
	}
	ft_putchar('\n');
	return (0);
}
