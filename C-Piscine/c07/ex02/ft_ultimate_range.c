#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc (size * sizeof(int) + 1);
	if (!*range)
	{
		*range = NULL;
		return (-1);
	}
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

int	main(int argc, char **argv)
{
	int	*result;
	int	min;
	int	max;
	int	size;

	min = atoi(argv[1]); //ft_atoi(girilen string ifadeyi int değere çeviriyor)/converts the entered string expression to an int value/
	max = atoi(argv[2]); //ft_atoi(girilen string ifadeyi int değere çeviriyor)/converts the entered string expression to an int value/
	size = ft_ultimate_range(&result, min, max);
	if (argc != 3)
	{
		printf("Progamın Kullanımı: %s <min> <max> \n", argv[0]);//using the s <min> <max> program
		return (1);
	}
	if (result == NULL)
	{																							//Eğer min değeri max’ın değerine eşit ya da büyükse, aralık 'NULL' işaretçi ve '0' sonucunu verecektir.
		printf("Bellek tahsisatında hata oluştu veya minimum değer maksimum değerden büyük.\n"); //Error in memory allocation or minimum value greater than maximum value.
		return (1); /* soruda istenene göre diceksiniz ki burası neden return (0) değil, aslında durum şöyle main fonksiyonunda 																	
						  return (1); --> Başarısızlık durumunu temsil eder,  return(0) ise Başarılı çalışmayı temsil eder  hem zaten fonksiyonun içinde yargıyı belirttik */
	}
	for	(int i = 0; i < size; i++)
	{
		printf("%d ", result[i]);
	}
	free (result);
	return (0);
}
