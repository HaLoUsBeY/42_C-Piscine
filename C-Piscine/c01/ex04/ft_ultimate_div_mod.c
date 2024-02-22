#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div ;
    *b = mod ;
}


int main (void)
{

    int a;
    int b;

    a = 100;
    b = 51 ;
    ft_ultimate_div_mod(&a,&b);
    printf("%d = div ,%d = mod ",a,b);

    return (0);
}