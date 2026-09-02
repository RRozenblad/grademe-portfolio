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
int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	char msg [] = "wrong number of arguments";
	int len;
	
	(void)argc;
	(void)argv;
	if (argc != 2)
	{
		ft_putstr(msg);
	}
	else
	{
		len = ft_strlen(argv[1]) - 1;
		while (len >= 0)
		{
			ft_putchar(argv[1][len]);
			len--;
		}
		ft_putchar('\n');
	}
	
	return (0);
}

