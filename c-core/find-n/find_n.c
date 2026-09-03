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

void ft_find_n(char *str)
{
	int i;
	char found;
	
	i = 0;
	found = 'N';
	while(str[i] && found != 'Y')
	{
		if(str[i] == 'n')
		{
			ft_putchar(str[i]);
			found = 'Y';
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	char msg[] = "wrong number of arguments";

	if (argc != 2)
	{
		ft_putstr(msg);
	}
	else
	{	
		ft_find_n(argv[1]);
	}
	return (0);
}
