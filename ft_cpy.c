/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_cpy.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 15:07:17 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 16:28:29 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_count_s(const char *s, char c, int i)
{
	int	a;

	a = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		a++;
		i++;
	}
	return (a);
}

char	*ft_cpy(const char *s, char c, int i)
{
	char	*tab;
	int		a;

	a = 0;
	if (!(tab = (char*)malloc(sizeof(*tab) * (ft_count_s(s, c, i) + 1))))
		return (NULL);
	while (s[i] != c && s[i])
	{
		tab[a] = s[i];
		a++;
		i++;
	}
	tab[a] = '\0';
	while (s[i] == c && s[i])
		i++;
	return (tab);
}

int		main()
{
	int i = 0;
	char tab[] = "****test***";
	char *tab1;

	while (tab[i] == 42)
		i++;
	tab1 = ft_cpy(tab, 42, i);
	printf("%s", tab1);
	return (0);
}
