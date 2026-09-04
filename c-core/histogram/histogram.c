#include <stdlib.h>
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

void ft_error_msg(void)
{
	char error [] = "wrong number of arguments";
	ft_putstr(error);
}

void ft_histogram(int x)
{
	int i;
	
	i = 0;
	while(i < x)
	{
		ft_putchar('#');
		i++;
	}
	ft_putchar('\n');
}

// Each argument is one value. Print its bar: that many '#', then a newline.
// A value that is zero or negative gives an empty line, newline included.
int	main(int argc, char **argv)
{
	int i;
	int argvs;  
	i = 1;
	if (argc == 1)
	{
		ft_error_msg();
		return (0);
	}
	while (argv[i])
	{
		argvs = atoi(argv[i]);
		ft_histogram(argvs);
		i++;
	}
	return (0);
}
