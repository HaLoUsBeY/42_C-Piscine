unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	unsigned int dj;
	unsigned int sj;

	i = 0;
	dj = ft_strlen(dest);
	j = dj;
    sj = ft_strlen(src);
	if (size == 0 || size <= dj)
		return (sj + size);
	while (src [i] != '\0' && i < size - dj - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dj + sj);
}
