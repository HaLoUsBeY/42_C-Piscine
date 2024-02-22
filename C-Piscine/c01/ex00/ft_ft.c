#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}


int main(void)
{

	int number ;
	int *ptr ;

	ptr = &number;

	ft_ft(ptr);

	printf("%d",number);



	return 0 ;
}