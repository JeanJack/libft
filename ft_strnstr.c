/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/13 13:50:52 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/21 17:46:48 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;
	size_t a;

	i = 0;
	a = 0;
	if (len == 0)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (needle[n] == haystack[i + n] && a < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)haystack + i);
			n++;
			a++;
		}
		i++;
		a++;
	}
	return (NULL);
}
