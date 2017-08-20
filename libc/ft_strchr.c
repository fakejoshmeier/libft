#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = -1;
	str = s;
	while (str[++i])
	{
		if (str[i] == c)
			return (str[i]);
	}
	return (NULL);
}
