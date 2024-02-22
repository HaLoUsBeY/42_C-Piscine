int	is_prime(int num)
{
	int	i;

	i = 2;
	if (num < 2)
	{
		return (0);
	}
	while (i <= num / i)
	{
		if (num % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	find_next_prime(int start)
{
	int	next;

	next = start;
	while (!is_prime(next))
	{
		next++;
	}
	return (next);
}
