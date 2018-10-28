/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 07:49:41 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/26 11:34:40 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len);

static int	ft_count_s(const char *s, char c, int i)
{
	int a;

	a = 0;
	while (s[i] != c && s[i])
	{
		a++;
		i++;
	}
	return (a);
}

static int	ft_count(const char *s, char c)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
			a++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c)
			i++;
	}
	return (a);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		a;
	int		b;
	int		n;
	char	**tab;

	if (s == NULL)
		return (NULL);
	i = 0;
	a = 0;
	n = 0;
	b = ft_count(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (b + 1))))
		return (NULL);
	while (a < b)
	{
		while (s[i] == c && s[i])
			i++;
		tab[a] = ft_strsub(s, i, ft_count_s(s, c, i));
		n = strlen(tab[a]);
		i = i + n;
		a++;
	}
	tab[a] = NULL;
	return (tab);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		return (0);
	char **tab;
	int i;

	i = 0;
	tab = ft_strsplit(av[1], atoi(av[2]));
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
