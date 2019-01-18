/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 18:23:08 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 16:58:49 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*cpy_to_tab(char *tab, char *s1, char *s2)
{
	size_t i;
	size_t n;

	i = 0;
	n = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		tab[i] = s2[n];
		i++;
		n++;
	}
	tab[i] = '\0';
	return (tab);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	n;
	char	*tab;

	i = 0;
	n = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[n])
		n++;
	if (!(tab = (char*)malloc(sizeof(*tab) * (n + i))))
		return (NULL);
	return (cpy_to_tab(tab, (char *)s1, (char *)s2));
}
