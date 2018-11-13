#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t a;
	size_t n;

	i = 0;
	a = ft_strlen(dst);
	n = ft_strlen(src);
	if (size <= a)
		return (n + size);
	while (dst[i] && i < (size - 1))
		i++;
	while (*src && i < (size - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (a + n);
}
