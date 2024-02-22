#include<stdio.h>
void	neutral(const char *str, int *i, int *k)
{
	int	j;

	j = *i;
	while (!(str[j] >= '0' && str[j] <= '9'))
	{
		if (str[j] == '-' || str[j] == '+')
		{
			if (str[j] == '-')
			{
				*k = -*k;
				j++;
			}
			else
				j++;
		}
		else
			break ;
	}
	*i = j;
}

void	status(const char *str, int *j)
{
	int	i;

	i = *j;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		else
			break ;
	}
	*j = i;
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	a;

	a = 0;
	negative = 1;
	i = 0;
	status(str, &i);
	neutral(str, &i, &negative);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			a = a * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return (a * negative);
}

int main(void)
{
	printf("%d",ft_atoi("---3asdasd"));


	return (0);
}