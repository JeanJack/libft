#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *tab;
	int t;

	i = 0;
	t = (unsigned char)c;
	while (i < n)
	{
		if (tab[i] == t)
			return (tab + i)
		i++;
	}
	return (NULL);
}
