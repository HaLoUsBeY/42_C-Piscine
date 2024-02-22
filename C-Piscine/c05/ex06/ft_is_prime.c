int	ft_is_prime(int nb)
{
	int	a2;

	a2 = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (a2 < nb)
		{
			if (!(nb % a2))
				return (0);
			a2++;
		}
	}
	return (1);
}
