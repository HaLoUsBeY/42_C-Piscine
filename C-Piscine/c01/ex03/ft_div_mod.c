#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0 && b !=0)
	{
		*div = a / b;
        *mod = a % b;
	}
}

int main(void)
{
	int a ;
	int b ;
	int x ;
	int y ;

	a = 40 ;
	b = 21 ;

	//int *ptr = &x ;
	//int *pwd = &y ;

	ft_div_mod(a, b, &x, &y);

	printf("%d = div , %d = mod \n",x ,y);

	return (0);
}
