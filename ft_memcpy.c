/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/09 08:28:20 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 14:10:26 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tab;
	char	*tab2;

	i = 0;
	tab = (char *)dst;
	tab2 = (char *)src;
	while (i < n)
	{
		tab[i] = tab2[i];
		i++;
	}
	return (tab);
}
