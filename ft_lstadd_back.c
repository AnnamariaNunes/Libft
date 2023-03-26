#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*end_node;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	end_node = ft_lstlast(*lst);
	end_node -> next = new;

}