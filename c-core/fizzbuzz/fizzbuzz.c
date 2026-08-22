#include <unistd.h>

void ft_putnbr(int nbr)
{
	long number;

	number = nbr;
	if (number < 0)
	{
		number *= -1;
	}

	if (number >= 0 && number <= 9)
	{
		number = number + '0';
		write(1, &number, 1); 
	}
	else 
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}

void fizzbuzz()
{
	int i;
	
	i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			write(1, "FizzBuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write(1, "Fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write(1, "Buzz", 4);
		}
		else
		{
			ft_putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}

}

int	main(void)
{
	fizzbuzz();
	return (0);
}
