#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;
	unsigned char *tab;
	unsigned char *tab1;

	i = 0;
	tab = (unsigned char *)dst;
	tab1 = (unsigned char *)src;
	while (i < n)
	{
		tab[i] = tab1[i];
		if (tab1[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
