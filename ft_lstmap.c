/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 16:33:08 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 17:07:04 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;

	while (lst)
	{
		if (!(list = (t_list*)malloc(sizeof())))
			return (NULL);
		list->content = f(lst);
		list = list->next;
		lst = lst->next;
	}
	return (list);
}
