/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 17:14:21 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 17:18:15 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;

	while (*alst)
	{
		lst = *alst->next;
		del(*alst->content, *alst->content_size);
		free(*alst);
		*alst = lst;
	}
	*alst = NULL;
}
