#include <unistd.h>

extern	void	ft_putchar(char c);
extern	void	ft_error(char *err);

void	loop_print(int n, char s_first, char s_mid, char s_last)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (i == 1)
		{
			ft_putchar(s_first);
			i++;
			continue ;
		}
		if (i == n)
		{
			ft_putchar(s_last);
			i++;
			continue ;
		}
		ft_putchar(s_mid);
		i++;
	}
}

void	rush(int horizontal, int vercital)
{
	int	vercital_index;
	int	horizontal_index;

	horizontal_index = 1;
	vercital_index = 1;
	if (horizontal <= 0 || vercital <= 0)
	{
		ft_error("Error: You have entered a null (can be 0) or negative number, run the program again.");
		return ;
	}
	while (vercital_index <= vercital)
	{
		if (vercital_index == 1 || vercital_index == vercital)
		{
			loop_print(horizontal, 'A', 'B', 'C');
		}
		else if (vercital_index != 1 || vercital_index != vercital)
		{
			loop_print(horizontal, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		vercital_index++;
	}
}
