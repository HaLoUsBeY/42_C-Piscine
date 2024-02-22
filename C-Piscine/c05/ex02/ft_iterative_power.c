int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	finish;

	finish = 1;
	i = 0;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i != power)
		{
			finish *= nb;
			i++;
		}
	}
	return (finish);
}
