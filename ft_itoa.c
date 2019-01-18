/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 07:52:10 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 19:43:50 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_s(int nb, int i, char *s)
{
	if (nb == 0)
	{
		s[0] = 48;
		return (s);
	}
	if (nb < 0)
	{
		s[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		s[i] = 48 + (nb % 10);
		nb = nb / 10;
		i--;
	}
	return (s);
}

static int	ft_intlen(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int nb)
{
	char	*s;
	int		i;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_intlen(nb);
	if (nb == 0)
		i++;
	if (!(s = (char*)malloc(sizeof(*s) * (i + 1))))
		return (NULL);
	s[i--] = '\0';
	return (ft_s(nb, i, s));
}
