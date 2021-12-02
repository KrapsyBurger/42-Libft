/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:02:10 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/02 17:03:16 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;

	result = NULL;
	(void)(del);
	while (lst)
	{
		ft_lstadd_back(&result, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (result);
}
