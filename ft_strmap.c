/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 10:10:25 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 17:00:07 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	char	*tab;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	if (!(tab = (char*)malloc(sizeof(*tab) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		tab[i] = f(s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
