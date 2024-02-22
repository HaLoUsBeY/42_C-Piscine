#include <stdio.h>

int ft_strlen(char *npt)
{
    int i ;
    int lenght ;

    i = 0 ;
    lenght = 0 ;

    while(npt[i] != '\0')
    {

        i++;
        lenght++;
    }return(lenght);


}


int main (void)
{
    printf("%d",ft_strlen("araplari yak"));
    return(0);
}