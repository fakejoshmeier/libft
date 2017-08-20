#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;
	char	*str1;
	char	*str2;

	count = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

	if (s1 == s2 || n == 0)
		return (0);
	while (str1[count] && str1[count] == str2[count])
	{
		if (count <= n)
			count++;
	}
	return (str1[count] - str2[count]);
}
