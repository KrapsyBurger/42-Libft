/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfascia <nathanfascia@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:37:20 by nfascia           #+#    #+#             */
/*   Updated: 2021/11/24 16:17:30 by nfascia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*a;
	char			*b;
	unsigned long	i;

	a = src;
	b = dest;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (dest);
}
