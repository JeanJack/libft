/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 07:49:41 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 17:20:45 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	ft_count_s(const char *s, char c, int i)
{
	int a;

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
		if (s[i] == c && s[i + 1] != c)
			a++;
		i++;
	}
	return (a - 1);
}

static char	*ft_cpy(const char *s, char c, int i)
{
	char	*tab;
	int		a;

	if (!(tab = (char*)malloc(sizeof(*tab) * (ft_count_s(s, c, i) + 1))))
		return (NULL);
	a = 0;
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

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		a;
	int		b;
	char	**tab;

	i = 0;
	a = 0;
	b = ft_count(s, c);
	if (!(tab = (char**)malloc(sizeof(**tab) * b)))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (a < b && s[i])
	{
		tab[a] = ft_cpy(s, c, i);
		a++;
	}
	tab[a] = NULL;
	return (tab);
}

int		main()
{
	char **tab;
	int i;
	char t[] = "*****test****rien****tes***";

	i = 0;
	tab = ft_strsplit(t, 42);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
