#include <stdio.h>
#include <stdlib.h>

char *ft_mag(int length)
{
	char *str;
	int	index;

	
	str = malloc(length*sizeof(char));
	index = 0;
	str[index] = '1';
	index++;
	while(index < length)
	{
		str[index] = '0';
		index++;
	}
	str[index] = '\0';
	return (str);
}

int	main()
{
	int	a;
	a = 9;

	printf("%s", ft_mag(a));
}
