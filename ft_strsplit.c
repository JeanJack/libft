#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	if (s[0] != '\0')
		a++;
	return (a);
}

static char	*ft_cpy(const char *s, char c, int *i)
{
	char *tab;
	int a;

	if (!(tab = (char*)malloc(sizeof(*tab) * (strlen(s)))))
		return (NULL);
	a = 0;
	while (s[*i] != c && s[*i])
	{
		tab[a] = s[*i];
		a++;
		*i += 1;
	}
	tab[a] = '\0';
	while (s[*i] == c && s[*i])
		*i += 1;
	return (tab);
}

char	**ft_strsplit(const char *s, char c)
{
	int i;
	int a;
	int b;
	char **tab;

	i = 0;
	a = 0;
	b = ft_count(s, c);
	if (!(tab = (char**)malloc(sizeof(**tab) * (b + 2))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (a < b && s[i])
	{
		tab[a] = ft_cpy(s, c, &i);
		a++;
	}
	tab[a] = NULL;
	return (tab);
}

int		main()
{
	int i = 0;
	char	**tab;
	char c = 42;
	char tab2[] = "*****test***rien****tes***";

	tab = ft_strsplit(tab2, c);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
