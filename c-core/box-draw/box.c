#include <stdlib.h>
#include <unistd.h>

// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
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

void ft_box(int width, int height)
{
	int w;
	(void)height;
	int h;

	h = 1;
	while (h <= height)
	{
		w = 1;
		while (w <= width)
		{
			if ((w == 1 || w == width) && (h == 1 || h == height))
			{
				ft_putchar('+');
			}
			else if ((w == 1 || w == width) && (h != 1 || h != height))
			{
				ft_putchar('|');	
			}
			else if ((w != 1 || w != width) && (h != 1 && h != height))
			{
				ft_putchar(' ');	
			}
			else if (w != 1 || w != width)
			{
				ft_putchar('-');
			}
			w++;
		}
		ft_putchar('\n');
		h++;
	}	
}

// void ft_horizontal(int width)
// {
// 	int w;
// 	w = 1;
// 	while(w <= width)
// 	{
// 		if (w == 1 || w == width)
// 		{
// 			ft_putchar('+');
// 		}
// 		else if (w != 1 || w != width)
// 		{
// 			ft_putchar('-');
// 		}
// 		w++;
		
// 	}
// 	ft_putchar('\n');

// }
// void ft_vertical(int height)
// {
// 	int h;
// 	h = 1;
// 	while(h <= height)
// 	{
// 		if (h == 1 || h == height)
// 		{
// 			ft_putchar('|');
// 		}
// 		else if (h != 1 || h != height)
// 		{
// 			ft_putchar(' ');
// 		}
// 		h++;
// 	}
// 	ft_putchar('\n');
// }

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int width;
	int height;
	char msg[] = "wrong number of arguments";
	if (argc != 3)
	{
		ft_putstr(msg);
		return (0);
	}
	if (atoi(argv[1]) <= 0)
	{
		return 0;
	}
	else
	{
	width = atoi(argv[1]);
	height = atoi(argv[2]);

	ft_box(width, height);
	}
	return (0);
}
