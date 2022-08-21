#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define LINE_MAX_LENGTH 100

//void	clear_str(char *str, int alloc_size)
//{
//	int	i;
//   
//	i = 0;
//	while (i < alloc_size)
//	{
//		str[i] = 0;
//		i++;
//	}
//}

void	read_line(char *buf, int alloc_size, int file_descriptor, int *done)
{
	read(file_descriptor, buf, 1);
	while (*buf != '\n' && *buf != 0)
	{
		buf++;
		read(file_descriptor, buf, 1);
	}
	if (*buf == 0)
		*done = 1;
	*buf = 0;
}

int	is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	match_nbr(char *str, char *to_find)
{
	if (!*to_find && (*str < '0' || *str > '9' ))
		return (1);
	else if (!*str)
		return (0);
	if (*str == *to_find)
		return (match_nbr(str + 1, to_find + 1));
	return (0);
}

char	*ft_strdup(char *src);

char	*find_key(char *file, char *key)
{
	int		done;
	int		file_descriptor;
	char	*line;
	char	*value;

	value = (char *) 0;
	file_descriptor = open(file, O_RDONLY);
	done = 0;
	line = (char *) malloc(LINE_MAX_LENGTH);
	while (!done)
	{
		read_line(line, LINE_MAX_LENGTH, file_descriptor, &done);
		if (match_nbr(line, key))
		{
			while (is_space(*line) || (*line >= '0' && *line <= '9'))
				line++;
			if (*line++ != ':')
				continue;
			while (is_space(*line))
				line++;
			value = ft_strdup(line);
		}
	}
	close(file_descriptor);
	return (value);
}

#include <stdio.h>
int	main()
{
	char	*file_path;

	file_path = "dict";
	printf("%s", find_key("dict", "123"));
}