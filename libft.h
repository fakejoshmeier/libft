#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t byte);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(const char *src);
size_t ft_strlen(const char *s);

#endif
