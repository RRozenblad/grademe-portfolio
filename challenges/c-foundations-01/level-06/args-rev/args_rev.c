#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int i;
	i = (argc - 1);
	if (argc == 1)
	{
		return (0);
	}
	else
	{
		while (i > 0)
		{
			ft_putstr(argv[i]);
			i--;
		}	
	}
	return (0);
}
