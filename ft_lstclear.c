#include "libft.h";

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*node;

	if (!lst || !*lst || !del)
		return ;
	while (*lst != NULL)
	{
		node = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = node;
	}
}