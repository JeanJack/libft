/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 07:48:43 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 17:02:23 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		n;
	char	*tab;

	if (s == NULL)
		return (NULL);
	n = ft_strlen(s);
	while (s[n - 1] == ' ' || s[n - 1] == '\t' || s[n - 1] == '\n')
		n--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		n--;
	if (n <= 0)
		n = 0;
	if (!(tab = (char*)malloc(sizeof(*tab) * (n + 1))))
		return (NULL);
	s += i;
	i = -1;
	while (++i < n)
		tab[i] = *s++;
	tab[i] = '\0';
	return (tab);
}
