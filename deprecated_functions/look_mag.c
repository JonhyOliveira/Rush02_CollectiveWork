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


void look_mag(int mag)
{
	ft_mag(mag);
}