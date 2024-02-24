#include <stdlib.h>
#include <stdio.h>
/*
int	ft_abs(int x)
{
	return (x < 0)	? -x : x;
}
*/
int	ft_abs(int x)
{
	if (x < 0)
	{
		x = -x;
	}
	if (x >= 0)
	{
		x = x;
	}
	return (x);
}

int	*ft_range(int max, int min)
{
	int	size;
	int	*mp;
	int	i;

	size = ft_abs(max - min);
	mp = (int *)malloc ((size) * sizeof(int) + 1);
	if (!mp)
		return (0);
	i = 0;
	while (max < min)
	{
		mp[i] = max;
		i++;
		max++;
	}
	while (max >= min)
	{
		mp[i] = min;
		i++;
		min++;
	}
	mp[i] = '\0';
	return (mp);
}
/*
int main(void)
{
	int x = 10;
	int y = 10;
	int size = ft_abs(y - x);

	int *p    =    ft_range(y, x);
	for (int i = 0; i<= size;i++)
	{
		printf("%d",p[i]);
	}
	free(p);
return (0);
}
*/