int	ft_iterative_factorial(int nb)
{
	int	i;
	int	finish;

	i = 1;
	finish = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	else
	{
		while (i <= nb)
		{
			finish *= i;
			i++;
		}
		return (finish);
	}
}
