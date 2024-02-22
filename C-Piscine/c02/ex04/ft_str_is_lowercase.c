int	ft_str_is_lowercase(char *str)
{
	int	t;

	t = 1;
	while (*str != '\0')
	{
		if (('a' <= *str && *str <= 'z'))
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
