int	ft_str_is_numeric(char *str)
{
	int	t;

	t = 1;
	while (*str != '\0')
	{
		if (('0' <= *str && *str <= '9'))
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
