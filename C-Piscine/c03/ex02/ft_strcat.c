#include <stdio.h>
#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;	
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}

int main(void)
{
	char str1[20] = "Hello, ";
	char str2[] = "world!";

	ft_strcat(str1, str2);

	printf("Birleştirilmiş string: %s\n", str1);

	return 0;
}