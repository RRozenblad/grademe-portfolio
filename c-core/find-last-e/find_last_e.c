#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
void ft_find_last_e(char *str)
{
	int i;
	i = ft_strlen(str) - 1;
	while(str[i])
	{
		if(str[i] == 'e')
		{
			ft_putchar('e');
			break;
		}
		i--;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		ft_putchar('e');
		ft_putchar('\n');
	}
	else
	{
		ft_find_last_e(argv[1]);
	}
	return (0);
}
