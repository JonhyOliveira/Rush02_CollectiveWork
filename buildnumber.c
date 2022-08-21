#include <stdio.h>
#include <stdlib.h>

char *buildnumber(char a, char b)
{
	char *str;

	if (a == '0')
	{
		str =  malloc(2*sizeof(char));
		str[0] = b;
		str[1] = '\0';
	}
	else
	{
		str =  malloc(3*sizeof(char));
		str[0] = a;
		str[1] = b;
		str[2] = '\0';
	}
	return (str);
}

int	main()
{
	char a;
	char b;

	a = '0';
	b = '4';
	printf("%s", buildnumber(a, b));
}