#include "libft.h"

void	*ft_lstnelem(t_list *lst, size_t s)
{
	size_t r;

	r = 0;
	while (s > (r - 1))
	{
		if (lst->next)
			return ;
		lst = lst->next;
		r++;
	}
	return lst;
}