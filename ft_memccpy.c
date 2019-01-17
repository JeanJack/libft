/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:07:43 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 14:05:00 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c,
	size_t n)
{
	size_t			i;
	unsigned char	*tab;
	unsigned char	*tab1;

	i = 0;
	tab = (unsigned char *)dst;
	tab1 = (unsigned char *)src;
	while (i < n)
	{
		tab[i] = tab1[i];
		if (tab1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
