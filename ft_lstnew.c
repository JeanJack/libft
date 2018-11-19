#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	if (!(lst = t_list*)malloc(sizeof(t_list)))
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
	}
	else
	{
		if (!(lst->content = malloc(sizeof(content))))
			return (NULL);
		ft_memcpy(lst->content, content, sizeof(content));
		lst->content_size = content_size;
	}
	lst->next = NULL;
	return (lst);
}
