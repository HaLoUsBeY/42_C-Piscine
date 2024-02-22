int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	t;

	t = 0;
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			t = s1[i] - s2[i];
			return (t);
		}
		i++;
	}
	return (t);
}
