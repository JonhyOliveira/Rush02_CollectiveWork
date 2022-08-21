#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*correctlength(char *str)
{
	int		vals[5];
	char	*new_string;

	vals[2] = ft_strlen(str);
	vals[4] = 0;
	if (vals[2] % 3 != 0)
	{
		vals[4] = 3 - (vals[2] % 3);
	}
	vals[3] = vals[2] + vals[4];
	new_string = malloc(sizeof(char) * (vals[3] + 1));
	vals[0] = 0;
	while (vals[0] < vals[4])
	{
		new_string[vals[0]] = '0';
		vals[0]++;
	}
	vals[1] = 0;
	while (str[vals[1]] != '\0')
	{
		new_string[vals[0] + vals[1]] = str[vals[1]];
		vals[1]++;
	}
	str[vals[0]] = '\0';
	return (str);
}

