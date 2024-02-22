int	ft_str_is_printable(char *str)
{
	int	t;

	t = 1;
	while (*str != '\0')
	{
		if ((' ' <= *str && *str <= '~'))
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
