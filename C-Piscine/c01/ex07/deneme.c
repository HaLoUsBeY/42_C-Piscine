#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int a = 0;
    int dummy;
    int z = size - 1; // size'i 1 azaltıyoruz

    while (a < z)
    {
        dummy = tab[a];
        tab[a] = tab[z];
        tab[z] = dummy;

        a++;
        z--;
    }
}

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_rev_int_tab(tab, size);

    // Dizinin ters çevrilmiş hali
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    return 0;
}
