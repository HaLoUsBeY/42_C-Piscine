#include <unistd.h>

void	ft_putnbr(int ab)
{
	long	n;
	char	digit;

	n = ab;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	digit = '0' + (n % 10);
	write(1, &digit, 1);
}

int	main(void)
{
	ft_putnbr(42);
	return (0);
}
