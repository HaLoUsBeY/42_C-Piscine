int	ft_str_is_alpha(char *str)
{
	int	t;

	t = 1;
	while (*str != '\0')
	{
		if (('A' <= *str && *str <= 'Z') || ('a' <= *str && *str <= 'z'))
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
