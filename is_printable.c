int	is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < ' ' || str[index] > 126)
			return (0);
	index++;
	}
	return (1);
}
