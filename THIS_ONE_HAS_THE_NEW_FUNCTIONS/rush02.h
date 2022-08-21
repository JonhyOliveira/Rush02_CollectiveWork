#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define LINE_MAX_LENGTH 100

int	ft_strlen(char *str);
char	*correctlength(char *str);
void	ft_putstr(char *str);
void	read_line(char *buf, int file_descriptor, int *done);
int	match_nbr(char *str, char *to_find);
char	*ft_strdup_printable(char *src);
char	*find_key(char *file, char *key);
void	print_mag(int mag);
void	print_nb(char a, char b);
int	hundreds(char hundred, int before);
int	decimals(char decimal, char unity, int before);
int	main(int argc, char **argv);

#endif
