/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: manquez <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/19 17:32:46 by manquez      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/19 18:19:51 by manquez     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *lst1;

	lst1 = NULL;
	while (lst)
	{
		if (!(lst1 = (t_list*)malloc(sizeof(*lst1) * ())))
			return (NULL);
		lst1 = f(lst);
		lst1 = lst1->next;
		lst = lst->next;
	}
	return (lst1);
}
