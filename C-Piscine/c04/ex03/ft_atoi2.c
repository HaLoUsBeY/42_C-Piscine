#include <stdio.h>
int ft_atoi(char *str)
{
	int i;
	int index;
	int neutral;

	i = 0;
	index = 0; 
	neutral = 1;

	while(str[i] == 32 || (str[i] == 9 && str[i] == 13 ))
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neutral = -neutral;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}

		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			return (0);
		}
	}
	while (str[i] >= '0' && str[i] <= '9')
	{

		index = index * 10 + (str[i] - 48); 
	
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			return(index * neutral);;
		}
		
		i++;
	
	}
	return(index * neutral);

}


int main(void)
{

	printf("%d",ft_atoi("   +-10asda13123123123asdasdasd13123123sdsa"));

	return 0;
}
