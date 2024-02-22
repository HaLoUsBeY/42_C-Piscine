#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	sayi;

	sayi = *a;
	*a = *b;
	*b = sayi;
}

int main (void)
{
	int x ;
	int y ;

	x = 5 ;
	y = 10 ;
	printf("%d = x , %d = y \n",x,y);
	ft_swap(&x, &y);

	printf("%d = x , %d = y ",x,y);
	return 0 ;
}
