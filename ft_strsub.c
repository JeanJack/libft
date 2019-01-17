/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 16:38:56 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/22 17:01:57 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(t = (char*)malloc(sizeof(*t) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		t[i] = s[start];
		i++;
		start++;
	}
	t[i] = '\0';
	return (t);
}
