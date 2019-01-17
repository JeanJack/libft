/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:07:54 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 11:57:59 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;
	int				t;

	i = 0;
	t = (unsigned char)c;
	tab = (unsigned char *)s;
	while (i < n)
	{
		if (tab[i] == t)
			return (tab + i);
		i++;
	}
	return (NULL);
}
