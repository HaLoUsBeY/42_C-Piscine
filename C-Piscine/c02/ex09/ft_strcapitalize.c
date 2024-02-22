void	inshell(int capitalize, char *str)
{
	if (capitalize && *str >= 'a' && *str <= 'z')
		*str = *str - 32;
	else if (!capitalize && *str >= 'A' && *str <= 'Z')
		*str = *str + 32;
}

char	*ft_strcapitalize(char *str)
{
	char	*start;
	int		capitalize;

	start = str;
	capitalize = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			inshell(capitalize, str);
			capitalize = 0;
		}
		else if (*str >= '0' && *str <= '9')
		{
			inshell(capitalize, str);
			capitalize = 0;
		}
		else
			capitalize = 1;
		str++;
	}
	return (start);
}
