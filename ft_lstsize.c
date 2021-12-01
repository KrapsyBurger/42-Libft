/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:55:31 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 18:56:11 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*begin;

	i = 0;
	begin = lst;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	lst = begin;
	return (i);
}
