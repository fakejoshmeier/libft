#include <libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*z;

	if (!n)
		return ;
	count = 0;
	z = s;
	while (count < n)
		*(count + z++) = 0;
}
