/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/10 11:08:08 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 17:03:27 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tab;
	char	*tab1;
	size_t	i;

	i = 0;
	tab = (char *)dst;
	tab1 = (char *)src;
	if (tab1 < tab)
	{
		while ((int)(--len) >= 0)
			*(tab + len) = *(tab1 + len);
	}
	else
		while (i < len)
		{
			*(tab + i) = *(tab1 + i);
			i++;
		}
	return (dst);
}
