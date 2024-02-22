char	*ft_strlowcase(char *str)
{
	char	*dummy;

	dummy = str;
	while (*str != '\0')
	{
		if ('A' <= *str && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (dummy);
}
