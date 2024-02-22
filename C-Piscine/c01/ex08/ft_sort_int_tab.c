#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i ;
	int dummy ;
	

		while(0 < size)
		{
			i = 0 ;
			while(i < size - 1){

				if(tab[i] > tab[i + 1])
				{

					dummy = tab[i];
					tab[i] = tab[i+1];
					tab[i+1] = dummy;


				}
				i++;
			}
			size--;
		}

	printf("%d,%d,%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7]);	
}

int main (void){

	int array[8] = {1, 500, -5, 50, 41, 89, -900, 100} ;
	int size ;
	size = 8 ;

	ft_sort_int_tab((array), size) ;





	return 0 ;
}