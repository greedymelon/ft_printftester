#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# if BUFFER_SIZE <= 0 || BUFFER_SIZE > 65536
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2, int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*is_end(char *str);
void	set_zero(char *b);
#endif
