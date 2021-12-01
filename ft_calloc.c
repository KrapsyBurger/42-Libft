/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:53:32 by nfascia           #+#    #+#             */
/*   Updated: 2021/12/01 11:45:30 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
	{
		return (ft_strdup(""));
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (ptr);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
