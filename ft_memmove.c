#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *alad1;
	char *alad2;
	size_t ala3;

	ala3 = 0;
	alad1 = (char *)dst;
	alad2 = (char *)src;
	if (alad2 < alad1)
	{
		while ((int)(--len) >= 0)
			*(alad1 + len) = *(alad2 + len);
	}
	else
		while (i < len)
		{
			*(alad1 + i) = *(alad2 + i);
			i++;
		}
	return (dst)
}
