#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	c;
	char	*z;

	if (!n)
		return ;
	c = 0;
	z = s;
	while (c < n)
		(z[c++]) = 0;
}
