#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*mp;
	int		i;

	i = 0;
	size = ft_strlen(src) + 1;
	mp = (char *)malloc ((size) * sizeof(char));
	if (!mp)
		return (0);
	while (src[i] != '\0')
	{
		mp[i] = src[i];
		i++;
	}
	mp[i] = '\0';
	return (mp);
}
/*
int main(void)
{
	int count;
	char src[] = "asdasdasd";
	count = ft_strlen(src);
	printf("%s",ft_strdup(src));

	
	return (0);
}
*/