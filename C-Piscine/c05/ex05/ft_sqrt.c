#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	square_root(long nb)
{
	long	index;
	long	b;

	b = nb;
	index = 2;
	if (nb < 0)
		return (0);
	else if (b == 0)
		return (0);
	else if (b == 1)
		return (1);
	else if (b >= 2)
	{
		while (index * index <= b)
		{
			if (index * index == b)
				return (index);
			index++;
		}
	}
	return (0);
}
