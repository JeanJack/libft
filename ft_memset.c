/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 15:03:35 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 07:19:06 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	if (n == 0)
		return (s);
	tab = (unsigned char *)s;
	while (i <= n - 1)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
