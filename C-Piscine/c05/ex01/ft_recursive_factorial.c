int	ft_recursive_factroial1(int nb)
{
	int	finish;

	finish = 1;
	if (nb != 0)
	{
		finish = nb * ft_recursive_factroial1(nb - 1);
	}
	return (finish);
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (0);
	}
	else
		return (ft_recursive_factroial1(nb));
}
