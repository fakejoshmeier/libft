#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;
	size_t	a;
	size_t	z;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = ft_strnew(len1 + len2);
	if (!str)
		return (NULL);
	a = -1;
	z = -1;
	while (++a < len1)
		*(str + a) = *(s1 + a);
	while (++z < len2)
		*(str + a++) = *(s2 + z);
	return (str);
}
