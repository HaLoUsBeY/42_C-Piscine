#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_error(char *err);
int	ft_str_length(char *str);

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

void	ft_error(char *err)
{
	write(1, err, ft_str_length(err));
}

int	ft_str_length(char *str)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
