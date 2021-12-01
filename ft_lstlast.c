#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	while (i < ft_lstsize(lst) - 1)
	{
		lst = lst->next;
		i++;
	}
	return(lst);
}