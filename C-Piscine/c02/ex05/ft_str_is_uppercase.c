int	ft_str_is_uppercase(char *str)
{
	int	t;

	t = 1;
	while (*str != '\0')
	{
		if (('A' <= *str && *str <= 'Z'))
		{
			str++;
		}
		else
		{
			t = 0;
			break ;
		}
	}
	return (t);
}
