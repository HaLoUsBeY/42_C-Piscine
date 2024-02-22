int	ft_fibonacci(int index)
{
	int	finish;

	finish = 1;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else if (index != 0)
		finish = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (finish);
}
