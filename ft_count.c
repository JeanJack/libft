/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 14:59:01 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 15:05:48 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_count(const char *s, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			a++;
		i++;
	}
	return (a - 1);
}

int		main()
{
	char tab[] = "**tur***  **egsd***bsb******";

	printf("%d", ft_count(tab, 42));
	return (0);
}
