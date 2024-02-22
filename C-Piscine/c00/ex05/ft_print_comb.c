#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	array[3];

	array[0] = '0';
	while (array[0] <= '7')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '8')
		{
			array[2] = array[1] +1;
			while (array[2] <= '9')
			{
				ft_putchar(array[0]);
				ft_putchar(array[1]);
				ft_putchar(array[2]);
				if (!(array[0] == '7' && array[1] == '8' && array[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
