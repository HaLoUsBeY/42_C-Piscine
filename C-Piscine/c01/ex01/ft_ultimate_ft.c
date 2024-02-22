#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42 ;
}

int main (void)
{	
	int sayi ;
	int *********pwd9;
	int ********pwd8;
	int *******pwd7;
	int ******pwd6;
	int *****pwd5;
	int ****pwd4;
	int ***pwd3;
	int **pwd2;
	int *pwd1;



	pwd1 = &sayi;
	pwd2 = &pwd1;
	pwd3 = &pwd2;
	pwd4 = &pwd3;
	pwd5 = &pwd4;
	pwd6 = &pwd5;
	pwd7 = &pwd6;
	pwd8 = &pwd7;
	pwd9 = &pwd8;

	ft_ultimate_ft(pwd9);

	printf("%d", *********pwd9);


	return 0 ;
}