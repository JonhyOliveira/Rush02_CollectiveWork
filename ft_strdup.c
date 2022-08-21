
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	char	*orig_dest;

	orig_dest = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	dest = orig_dest;
	if (dest)
	{
		while (*src)
			*dest++ = *src++;
		*dest = 0;
	}
	return (orig_dest);
}
//int	main()
//{
//	char *dest;
//
//	dest = ft_strdup("Ola =D");
//	printf("- %s\n", dest);
//	dest = ft_strdup("");
//	printf("- %s\n", dest);
//	dest = ft_strdup(";_;");
//	printf("- %s\n", dest);
//}
