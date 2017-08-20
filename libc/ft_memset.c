#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	t;
	char*	ptr;

	ptr = s;
	t = 0;
	while (t < n)
		*(ptr + t++) = c;
	return (s);
}
